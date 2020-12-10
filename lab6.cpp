#include "make_random_vector.hpp"
#include <iostream>

struct myclass
{
    bool operator()(int i, int j) { return (i > j); }
} myobject;

int main()
{
    std::vector< int > vec;
    vec = make_random_vector(10, 0, 20);
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    std::cout << "\n\nSortowanie malejaco wartosci w wektorze\n";
    std::sort(vec.begin(), vec.end(), myobject);
    for (auto it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << ",\t";

    puts("\nOstatnia linijka kodu!");
}