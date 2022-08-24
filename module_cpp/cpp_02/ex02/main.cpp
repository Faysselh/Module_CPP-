/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:57:57 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/15 22:57:58 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*
int		main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}*/

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "Test increment, decrement with a = " << a.toFloat() << " and b = " << b.toFloat() << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "Max :" << Fixed::max(a, b) << std::endl;
	std::cout << "Min: " << Fixed::min(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "Test comparaison with a = " << a.toInt() << " and b = " << b.toInt() << std::endl;
	std::cout << "(a < b)  : " << (a < b) << std::endl;
	std::cout << "(a > b)  : " << (a > b) << std::endl;
	std::cout << "(a <= b) : " << (a <= b) << std::endl;
	std::cout << "(a >= b) : " << (a >= b) << std::endl;
	std::cout << "(a == b) : " << (a == b) << std::endl;
	std::cout << "(a == a) : " << (a == a) << std::endl;
	std::cout << "(a != a) : " << (a != a) << std::endl;

	Fixed c(2);
	std::cout << "Test operation with a = " << a.toInt() << " and b = " << b.toInt() << " and c = " << c.toInt() << std::endl;
	std::cout << "b + c = " << b + c << std::endl;
	std::cout << "b - c = " << b - c << std::endl;
	std::cout << "b * c = " << b * c << std::endl;
	std::cout << "ab / c = " << b / c << std::endl;
	return 0;
}