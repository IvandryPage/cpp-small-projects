#include <iostream>
#include <concepts>

// C++ CONCEPTS
/*
    same_as
    derived_from
    convertible_to
    common_reference_with
    common_with
    integral
    signed_integral
    unsigned_integral
    floating_point
 */

template <typename T>
requires std::integral<T>
T add (T a, T b)
{
    return a + b;
}

int main()
{
    char a_0{10};
    char a_1{20};
    auto result_a = add(a_0, a_1);
    return 0;
}