#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    std::transform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& human) {
        return human.isMonster() ? 'n' : 'y';
    });

    std::for_each(people.begin(), people.end(), [&](Human& human) { human.birthday(); });

    return ret_v;
}