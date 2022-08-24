/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:16:56 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/21 20:16:56 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Constructor Animal assignation called" << std::endl;
}

Animal::Animal(const Animal&copie) : _type(copie._type)
{
	std::cout << "Copie Animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal&nb)
{
	std::cout << "Assignation Animal operator called" << std::endl;
	this->_type = nb._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal make hungry noise !!!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}