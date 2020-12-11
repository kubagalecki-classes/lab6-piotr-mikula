#include "make_random_vector.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

int main()
{
    std::vector< double > vec;
    vec = make_random_vector(5, -1.0, 1.0);
    std::cout << "Wektor losowych liczb zmiennoprzecinkowych z przedzialu [0, 10]\n";
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::vector< double > vec_sin;
    vec_sin.resize(vec.size());

    std::transform(vec.begin(), vec.end(), vec_sin.begin(), [](double i) { return sin(i); });

    std::cout << "\n\nWektor sinusow wartosci z pierwszego wektora\n";
    for (auto it = vec_sin.begin(); it != vec_sin.end(); it++)
        std::cout << *it << ",\t";

    puts("\n\nOstatnia linijka kodu!");
}