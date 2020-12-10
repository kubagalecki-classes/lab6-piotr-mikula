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
    std::cout << "\n";

    if (find(vec.begin(), vec.end(), 7) != vec.end())
        std::sort(vec.begin(), find(vec.begin(), vec.end(), 7));
    else
        std::sort(vec.begin(), vec.end());
    std::cout << "\nPo sortowaniu elementow znalezionych przed liczba 7\n";
    for (auto i = vec.begin(); i != vec.end(); ++i)
        std::cout << *i << ",\t";

    puts("\nOstatnia linijka kodu!");
}