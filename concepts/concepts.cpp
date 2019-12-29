#include <concepts>

template <typename T>
concept Multipliable = requires(T a, T b)
{
    {a * b} -> std::convertible_to<T>;
};

template <Multipliable T>
T power(T base, unsigned long exponent)
{
    T result = base;
    while(--exponent)
    {
        result = result * base;
    }
    return result;
}

#include <iostream>

template <unsigned MODULO>
struct IntegerModulo
{
    long value;
    
    friend IntegerModulo operator*(IntegerModulo const& lhs, IntegerModulo const& rhs)
    {
           return {(lhs.value * rhs.value) % MODULO};
    }
    
    friend std::ostream& operator<<(std::ostream& os, IntegerModulo const& integer)
    {
        return os << integer.value;
    }
};

int main()
{
    std::cout << power(2, 10) << std::endl;
    std::cout << power(IntegerModulo<1000>{2}, 10) << std::endl;
    // std::cout << power("a", 2) << std::endl; // concept error
}