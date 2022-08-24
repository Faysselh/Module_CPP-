/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:00:04 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/20 19:00:05 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
		//ClapTrap Bjorn("Fayss");
	//ClapTrap Thor;
	/*ScavTrap Ivar;
	ScavTrap Floki(Ivar);
	ScavTrap Ragnar("Padre");*/
	ScavTrap Bjorn;
	FragTrap Ivar;
	FragTrap Floki(Ivar);
	FragTrap Ragnar("Padre");


	Bjorn.attack("Thor");
	Floki.attack("Zak");
	Ivar.beRepaired(30);
	Ragnar.attack("Madrina");
	Ragnar.highFivesGuys();
	Bjorn.guardGate();
	return (0);
}