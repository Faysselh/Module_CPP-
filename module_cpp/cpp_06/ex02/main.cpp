/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:21:24 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/30 16:21:24 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base    *generate_random_base()
{
    int i = rand() % 3;

    switch (i)
    {
        case 1:
            std::cout << "Generate A... Done" << std::endl;
            return new A;
        
        case 2:
            std::cout << "Generate B... Done" << std::endl;
            return new B;
        case 0:
            std::cout << "Generate C... Done" << std::endl;
            return new C;
    }
    return NULL;
}

void    identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl; 
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl; 
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl; 
}

void    identify_from_reference(Base &p)
{
    if (dynamic_cast<A*>(&p) != NULL)
        std::cout << "A" << std::endl; 
    else if (dynamic_cast<B*>(&p) != NULL)
        std::cout << "B" << std::endl; 
    else if (dynamic_cast<C*>(&p) != NULL)
        std::cout << "C" << std::endl; 
}

int main()
{
    A *a = new A;
    B *b = new B;
    C c;

    srand(time(NULL));

    identify_from_pointer(a);
    identify_from_reference(*a);

    identify_from_pointer(b);
    identify_from_reference(*b);

    identify_from_pointer(&c);
    identify_from_reference(c);

    for (int i = 0; i < 5; i++)
    {
        Base *b = generate_random_base();
        identify_from_pointer(b);
        identify_from_reference(*b);
    }

    return 0;
}