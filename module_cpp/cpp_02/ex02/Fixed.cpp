/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:57:52 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/15 22:57:53 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fix(0)
{

}

Fixed::Fixed(const int n)
{
	this->_fix = n << this->_nbit;
}

Fixed::Fixed(const float f)
{
	this->_fix = (int)(roundf(f * (1 << this->_nbit)));
}

Fixed::Fixed(const Fixed&autre)
{
	*this = autre;
}

Fixed::~Fixed(void)
{

}

int     Fixed::getRawBits(void) const
{
	return (this->_fix);
}

void    Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}

Fixed	&Fixed::operator=(const Fixed&nb)
{
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

bool			Fixed::operator>(Fixed const &ref) const
{
	return (this->_fix > ref._fix);
}

bool			Fixed::operator<(Fixed const &ref) const
{
	return (this->_fix < ref._fix);
}

bool			Fixed::operator>=(Fixed const &ref) const
{
	return (this->_fix >= ref._fix);
}

bool			Fixed::operator<=(Fixed const &ref) const
{
	return (this->_fix <= ref._fix);
}

bool			Fixed::operator==(Fixed const &ref) const
{
	return (this->_fix == ref._fix);
}

bool			Fixed::operator!=(Fixed const &ref) const
{
	return (this->_fix != ref._fix);
}

Fixed			Fixed::operator+(Fixed const &ref) const
{
	return (Fixed(this->toFloat() + ref.toFloat()));
}

Fixed			Fixed::operator-(Fixed const &ref) const
{
	return (Fixed(this->toFloat() - ref.toFloat()));
}

Fixed			Fixed::operator*(Fixed const &ref) const
{
	return (Fixed(this->toFloat() * ref.toFloat()));
}

Fixed			Fixed::operator/(Fixed const &ref) const
{
	if (ref.getRawBits() != 0)
		return (Fixed(this->toFloat() / ref.toFloat()));
	return (Fixed(0));
}

Fixed			&Fixed::operator++(void)
{
	_fix += 1;
	return (*this);
}

Fixed			&Fixed::operator--(void)
{
	_fix -= 1;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed	p(*this);

	_fix += 1;
	return (p);
}

Fixed			Fixed::operator--(int)
{
	Fixed	p(*this);

	_fix -= 1;
	return (p);
}

Fixed			&Fixed::min(Fixed &p1, Fixed &p2)
{
	if (p1 <= p2)
		return (p1);
	else
		return (p2);
}

Fixed			&Fixed::max(Fixed &p1, Fixed &p2)
{
	if (p1 > p2)
		return (p1);
	else
		return (p2);
}

const Fixed		&Fixed::min(const Fixed &p1, const Fixed &p2)
{
	if (p1 <= p2)
		return (p1);
	else
		return (p2);
}

const Fixed		&Fixed::max(const Fixed &p1, const Fixed &p2)
{
	if (p1 > p2)
		return (p1);
	else
		return (p2);
}