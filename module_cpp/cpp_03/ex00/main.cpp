/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:49:19 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/15 23:49:20 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap    Thor("Fayss");
    ClapTrap    Ragnar(Thor);
    ClapTrap    Bjorn("floki");
	Bjorn.attack("Thor");
    Bjorn = Thor;
    ClapTrap    Ivar(Bjorn);

    Bjorn.attack("Ragnar");
	Ivar.takeDamage(45);
    Thor.beRepaired(26);
	Bjorn.beRepaired(42);
	return (0);
}