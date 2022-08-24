/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:34:22 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/06 20:34:39 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&autre)
{
	std::cout << "Copie constructor called" << std::endl;
	*this = autre;
}

Fixed   &Fixed::operator=(const Fixed&nb)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix = nb.getRawBits();
	return (*this);
}

int     Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix);
}

void    Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
