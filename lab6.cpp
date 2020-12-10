#include "make_random_vector.hpp"
#include <iostream>

int main()
{
    std::vector< int > vec;
    vec = make_random_vector(10, 0, 10);
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nSortowanie wartosci w wektorze\n";
    std::sort(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    int licznik = std::count(vec.begin(), vec.end(), 7);
    std::cout << "\n\nLiczba 7 wystepuje " << licznik << " razy\n";

    puts("\nOstatnia linijka kodu!");
}