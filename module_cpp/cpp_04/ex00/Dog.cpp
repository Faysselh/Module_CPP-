/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:17:18 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/21 20:17:19 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog&copie) : Animal(copie)
{
	std::cout << "Copie Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog	&Dog::operator=(const Dog&nb)
{
	std::cout << "Assignation Dog operator called" << std::endl;
	this->_type = nb._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog make a doggy noise" << std::endl;
}