#include "make_random_vector.hpp"
#include <iostream>

class isBigger
{
public:
    bool operator()(int i) { return (i > a); }
    int  a;
};

int main()
{
    isBigger big;

    std::vector< int > vec;
    vec = make_random_vector(10, 0, 10);
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nSortowanie rosnaco wartosci w wektorze\n";
    std::sort(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nPodaj liczbe calkowita\n";
    std::cin >> big.a;

    int licznik = count_if(vec.begin(), vec.end(), big);
    std::cout << "\nLiczba wieksza niz " << big.a << " wystepuje " << licznik << " razy\n";

    puts("\nOstatnia linijka kodu!");
}