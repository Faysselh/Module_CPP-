/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:18:58 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/28 17:33:35 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat&copie) : WrongAnimal(copie)
{
	std::cout << "Copie WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat&nb)
{
	std::cout << "Assignation WrongCat called" << std::endl;
	this->_type = nb._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat will never make noise" << std::endl;
}
