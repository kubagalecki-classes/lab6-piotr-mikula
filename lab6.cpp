#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>

int main()
{
    std::string haslo;
    std::string klucz1 = "piesek";
    std::string klucz2 = "kotek";

    std::cout << "Podaj ciag znakow: ";
    std::cin >> haslo;

    auto x1 = std::search(haslo.begin(), haslo.end(), klucz1.begin(), klucz1.end());
    auto x2 = std::search(haslo.begin(), haslo.end(), klucz2.begin(), klucz2.end());

    if ((*x1 != 0) || (*x2 != 0))
        std::cout << "1 - Znaleziono podany ciag\n";
    else
        std::cout << "0 - Nie znaleziono podanego ciagu\n";

    puts("\nOstatnia linijka kodu!");
}