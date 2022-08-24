/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:08:05 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/13 20:08:06 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fix = n << this->_nbit;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fix = (int)(roundf(f * (1 << this->_nbit)));
}

Fixed::Fixed(const Fixed&autre)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = autre;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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

Fixed	&Fixed::operator=(const Fixed&nb)
{
	std::cout << "Assisgnation constructor called" << std::endl;
	this->_fix = nb.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &flux, const Fixed &num)
{
	flux << num.toFloat();
	return (flux);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fix) / (float)(1 << this->_nbit));
}

int		Fixed::toInt(void) const
{
	return ((int)(this->_fix) >> this->_nbit);
}