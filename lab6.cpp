#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>

int main()
{
    std::vector< int > vec;
    vec = make_random_vector(10, 0, 10);
    
    std::cout << "Wektor losowych liczb calkowitych z przedzialu [0, 10]\n";
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    auto x = std::partition(vec.begin(), vec.end(), [](int i) { return (i > 6); });
    std::cout << "\n\n";

    std::sort(vec.begin(), x);
    
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    puts("\n\nOstatnia linijka kodu!");
}