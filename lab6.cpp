#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>

int main()
{
    std::vector< int > vec;
    vec = make_random_vector(8, -1, 1);
    std::cout << "Wektor losowych liczb calkowitych z przedzialu [0, 10]\n";
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    if (std::any_of(vec.begin(), vec.end(), [](int i) { return i > 0.9; }))
        std::cout << "\n\nPrzynajmniej jeden element wektora jest wieksza niz 0.9.\n";
    else
        std::cout << "\n\nNie istnieje element wektora wiekszy niz 0.9.\n";

    puts("\nOstatnia linijka kodu!");
}