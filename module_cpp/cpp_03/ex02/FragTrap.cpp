/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:01:00 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/20 19:01:01 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_Name = "Karimuu";
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "Constructor FragTrap default called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->_Name = name;
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "Constructor FragTrap assignation called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& copie)
{
	this->_Name = copie._Name;
	this->_Hitpoints = copie._Hitpoints;
	this->_Energy_points = copie._Energy_points;
	this->_Attack_damage = copie._Attack_damage;
	std::cout << "Copie FragTrap Constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap&nb)
{
	this->_Name = nb._Name;
	this->_Hitpoints = nb._Hitpoints;
	this->_Energy_points = nb._Energy_points;
	this->_Attack_damage = nb._Attack_damage;
	std::cout << "Assignation FragTrap operator called" << std::endl;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << _Attack_damage << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hey ClapTrap and ScavTrap give my five" << std::endl;
	std::cout << "This is how mother and sons celebrate the high fives" << std::endl;
	return ;
}