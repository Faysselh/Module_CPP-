/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:19:45 by fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/05 19:12:38 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    for (int i= 0; i <= 21; i++)
        mstack.push(i);
    std::cout << "TOP : " << mstack.top() << " ; SIZE : " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "TOP : " << mstack.top() << " ; SIZE : " << mstack.size() << std::endl;

    MutantStack<int> copy(mstack);
    MutantStack<int>::iterator it = copy.begin();
    MutantStack<int>::iterator ite = copy.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it;
        if (it + 1 != ite)
            std::cout << " ; ";
        ++it;
    }
    std::cout << std::endl << "REVERSE ITERATOR" << std::endl;

    for (MutantStack<int>::reverse_iterator it = copy.rbegin(); it != copy.rend(); it++)
    {
        std::cout << *it;
        if (it + 1 != copy.rend())
            std::cout << " ; ";
    }
    std::cout << std::endl;
    std::stack<int> s(copy);
    std::cout << "SIZE = " << s.size() << std::endl;
    return 0;
}
