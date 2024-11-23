#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    for (std::list< Human >::iterator lit = people.begin(); lit != people.end(); lit++)
    {
        lit->birthday();
    }
    for (std::list<Human>::reverse_iterator lit2 = people.rbegin(); lit2 != people.rend(); lit2++)
    {
        if (lit2->isMonster() == false) {
            result.emplace_back('y');
        }
        else
            result.emplace_back('n');
    }
    return result;
}
