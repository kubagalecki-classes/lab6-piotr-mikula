#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>

int main()
{
    std::vector< double > vec1 = {3.14, 1.01, 4.2};
    std::vector< double > vec2 = {6.9, 1.23, 3.11};
    double                init = 0.0;

    std::cout << "Iloczyn skalarny wektorow: [ ";
    for (auto i = vec1.begin(); i != vec1.end(); ++i)
        std::cout << *i << " ";
    std::cout << "] oraz [ ";
    for (auto i = vec2.begin(); i != vec2.end(); ++i)
        std::cout << *i << " ";
    std::cout << "]\n";
    std::cout << "wynosi: " << std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), init)
              << std::endl;

    puts("\nOstatnia linijka kodu!");
}