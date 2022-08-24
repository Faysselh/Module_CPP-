/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:28:56 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/17 19:28:56 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	//ClapTrap Bjorn("Fayss");
	//ClapTrap Thor;
	ScavTrap Ivar;
	ScavTrap Floki(Ivar);
	ScavTrap Ragnar("Padre");

	//Bjorn.attack("Thor");
	Floki.attack("Zak");
	Ivar.beRepaired(30);
	Ragnar.attack("Madrina");
	Ragnar.guardGate();
	return (0);
}
