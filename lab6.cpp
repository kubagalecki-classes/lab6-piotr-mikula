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
    std::cout << "\nRozmiar wektora to: " << vec.size() << std::endl;

    std::cout << "\nKasowanie elementow wektora o wartosci 3\n";
    vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());

    for (auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ",\t";
    std::cout << "\nRozmiar zredukowanego wektora to: " << vec.size() << std::endl;

    puts("\nOstatnia linijka kodu!");
}