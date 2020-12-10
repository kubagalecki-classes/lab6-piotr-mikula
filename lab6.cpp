#include "make_random_vector.hpp"
#include <iostream>

struct myclass
{
    bool operator()(int i) { return (i > 7); }
} isBigger;

int main()
{
    std::vector< int > vec;
    vec = make_random_vector(10, 0, 10);
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nSortowanie rosnaco wartosci w wektorze\n";
    std::sort(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    int licznik = count_if(vec.begin(), vec.end(), isBigger);
    std::cout << "\n\nLiczba wieksza niz 7 wystepuje " << licznik << " razy\n";

    puts("\nOstatnia linijka kodu!");
}