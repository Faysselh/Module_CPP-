/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:10:55 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 18:10:57 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    Bureaucrat  Dolu("Dolu", 76);
    Bureaucrat  Karim("Karim", 75);
    Form    Raphael("raphael", 75, 75);

    try
    {
        Form    Kokoa("kokoa", 0, 75);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form    Kokoa("kokoa", 151, 75);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Dolu.signForm(Raphael);
    std::cout << Raphael << std::endl;
    Karim.signForm(Raphael);
    std::cout << Raphael << std::endl;
    return (0);
}