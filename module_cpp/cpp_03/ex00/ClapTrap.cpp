/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:49:00 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/15 23:49:01 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Aizen"), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Name: " << this->_Name << std::endl;
	std::cout << "Hitpoints: " << this->_Hitpoints << std::endl;
	std::cout << "Energy Points: " << this->_Energy_points << std::endl;
	std::cout << "Attack Damage: " << this->_Attack_damage << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Assignation constructor called" << std::endl;
	std::cout << "Name: " << this->_Name << std::endl;
	std::cout << "Hitpoints: " << this->_Hitpoints << std::endl;
	std::cout << "Energy Points: " << this->_Energy_points << std::endl;
	std::cout << "Attack Damage: " << this->_Attack_damage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap&copie) : _Name(copie._Name), _Hitpoints(copie._Hitpoints), _Energy_points(copie._Energy_points),
			 _Attack_damage(copie._Attack_damage)
{
	std::cout << "Copie constructor called" << std::endl;
	std::cout << "Name: " << this->_Name << std::endl;
	std::cout << "Hitpoints: " << this->_Hitpoints << std::endl;
	std::cout << "Energy Points: " << this->_Energy_points << std::endl;
	std::cout << "Attack Damage: " << this->_Attack_damage << std::endl;
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &nb)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = nb._Name;
	this->_Hitpoints = nb._Hitpoints;
	this->_Energy_points = nb._Energy_points;
	this->_Attack_damage = nb._Attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_Name << " attack " << target;
	std::cout << ", " << "causing " << this->_Attack_damage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_Name << " take " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_Name << " repaired " << amount << " of he's life" << std::endl;
}