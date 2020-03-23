template <typename T>
T library_function(T arg)
{
    return arg;
}

extern template int library_function(int arg);