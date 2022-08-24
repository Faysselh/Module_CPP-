/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:29:41 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/17 19:29:42 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_Name = name;
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "Constuctor ScavTrap assignation called" << std::endl;
	return ;
}

ScavTrap::ScavTrap()
{
	//this->_Name = "Karim"; // En commentant cette ligne il assigne un name par defaut de ClapTrap
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap&copie)
{
	std::cout << "Copie ScavTrap Constructor called" << std::endl;
	_Name = copie._Name;
	_Hitpoints = copie._Hitpoints;
	_Attack_damage = copie._Attack_damage;
	_Energy_points = copie._Energy_points;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap&nb)
{
	std::cout << "Assignation Operator ScavTrap called" << std::endl;
	this->_Name = nb._Name;
	this->_Hitpoints = nb._Hitpoints;
	this->_Energy_points = nb._Energy_points;
	this->_Attack_damage = nb._Attack_damage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << _Attack_damage << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "That ScavTrap have enterred in Gate keeper mode" << std::endl;
	return ;
}