#include "library.h"

template <typename T>
T library_function(T arg)
{
    return arg;
}

template int library_function(int arg);