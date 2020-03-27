COMPLEX_FUNCTION = '''
constexpr int f(int n, int k)
{
    if (n < 2)
        return n*k;
    return f(n-1, k) + f(n-2, k);
}

'''

TEMPLATE_FUNCTION_BODY_PATTERN = '''
{{
    constexpr int value = f(20, {0});
    static_assert(value >= 0, "non-negative");
    return arg + value;
}}'''

def generate_library_header(f, functions_count, optimized):
    f.write('''
#ifndef LIBRARY_H
#define LIBRARY_H

''')
    if optimized < 2:
        f.write(COMPLEX_FUNCTION)

    for i in range(functions_count):
        f.write('''
template <typename T>
T library_function_{0}(T arg)'''.format(i))
        if optimized > 1:
            f.write(';')
        else:
            f.write(TEMPLATE_FUNCTION_BODY_PATTERN.format(i))
        if optimized > 0:
            f.write('''
extern template int library_function_{0}(int arg);
'''.format(i))
        else:
            f.write('''
''')
    f.write('''
#endif''')

def generate_library_source(f, library_header, functions_count, optimized):
    f.write('''
#include "{0}"
'''.format(library_header))

    if optimized > 1:
        f.write(COMPLEX_FUNCTION)

    for i in range(functions_count):
        if optimized > 1:
            f.write('''
template <typename T>
T library_function_{0}(T arg)'''.format(i))
            f.write(TEMPLATE_FUNCTION_BODY_PATTERN.format(i))
        f.write('''
template int library_function_{0}(int arg);'''.format(i))

def generate_use_header(f, use_number):
    f.write('''
#ifndef USE_{0}_H
#define USE_{0}_H

int use_{0}();

#endif
'''.format(use_number))

def generate_use_source(f, use_number, library_header, use_header_pattern, functions_count):
    use_header = use_header_pattern.format(use_number)
    f.write('''
#include "{2}"
#include "{1}"

int use_{0}()
{{
    int x = {0};'''.format(use_number, library_header, use_header))
    for i in range(functions_count):
        f.write('''
    x += library_function_{0}(x);'''.format(i))
    f.write('''
    return x;
}''')

def generate_main(f, use_header_pattern, uses_count):
    for use_number in range(uses_count):
        f.write('''
#include "use_{0}.h"'''.format(use_number))
    f.write('''
#include <iostream>

int main()
{
    int s = 0;''')
    for use_number in range(uses_count):
        f.write('''
    s += use_{0}();'''.format(use_number))

    f.write('''
    std::cout << s << std::endl;
}
''')

LIBRARY_HEADER = 'library.h'
USE_SOURCE_PATTERN = 'use_{0}.cpp'
USE_HEADER_PATTERN = 'use_{0}.h'
MAIN_FILE = 'main.cpp'
LIBRARY_SOURCE = 'library.cpp'

def generate_scenario(directory, optimized, functions_count, uses_count):
    with open(f'{directory}/{LIBRARY_HEADER}', 'w') as f:
        generate_library_header(f, functions_count, optimized)
    for use_number in range(uses_count):
        use_header = USE_HEADER_PATTERN.format(use_number)
        with open(f'{directory}/{use_header}', 'w') as f:
            generate_use_header(f, use_number)
        use_source = USE_SOURCE_PATTERN.format(use_number)
        with open(f'{directory}/{use_source}', 'w') as f:
            generate_use_source(f, use_number, LIBRARY_HEADER, USE_HEADER_PATTERN, functions_count)
    if optimized:
        with open(f'{directory}/{LIBRARY_SOURCE}', 'w') as f:
            generate_library_source(f, LIBRARY_HEADER, functions_count, optimized)
    with open(f'{directory}/{MAIN_FILE}', 'w') as f:
        generate_main(f, USE_HEADER_PATTERN, uses_count)

import sys

def main():
    if len(sys.argv) < 3:
        raise Exception("Missing arguments, expected 2: FUNCTIONS_COUNT and USES_COUNT")
    functions_count = int(sys.argv[1])
    uses_count = int(sys.argv[2])
    for directory, optimized in [('optimized_2', 2), ('optimized', 1), ('unoptimized', 0)]:
        generate_scenario(directory, optimized, functions_count, uses_count)

if __name__ == '__main__':
    main()
