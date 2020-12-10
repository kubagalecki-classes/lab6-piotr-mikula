#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>

int main()
{
    std::string haslo;

    std::cout << "Podaj ciag znakow: ";
    std::cin >> haslo;

    auto x = std::adjacent_find(haslo.begin(), haslo.end());
    
    if (*x != 0)
        std::cout << "1 - Wystepuja dwa te same znaki pod rzad\n";
    else
        std::cout << "0 - Nie wystepuja dwa te same znaki pod rzad\n";

    puts("\nOstatnia linijka kodu!");
}