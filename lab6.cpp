#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>

int main()
{
    std::string haslo;

    std::cout << "Podaj ciag znakow: ";
    std::cin >> haslo;

    std::reverse(haslo.begin(), haslo.end());
    std::cout << "Ciag znakow po odwroceniu: " << haslo << std::endl;

    puts("\nOstatnia linijka kodu!");
}