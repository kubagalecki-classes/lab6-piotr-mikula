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

    std::rotate(vec.begin(), find(vec.begin(), vec.end(), 7), vec.end());
    std::cout << "\n\nWektor po przesunieciu\n";
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";
    std::cout << "\n";

    puts("\nOstatnia linijka kodu!");
}