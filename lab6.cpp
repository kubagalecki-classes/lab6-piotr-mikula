#include "make_random_vector.hpp"
#include <iostream>

int main()
{
    int                big;
    std::vector< int > vec;
    vec = make_random_vector(10, 0, 10);
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nSortowanie rosnaco wartosci w wektorze\n";
    std::sort(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nPodaj liczbe calkowita\n";
    std::cin >> big;

    int licznik = count_if(vec.begin(), vec.end(), [&](int i) { return (i > big); });
    std::cout << "\nLiczba wieksza niz " << big << " wystepuje " << licznik << " razy\n";

    puts("\nOstatnia linijka kodu!");
}