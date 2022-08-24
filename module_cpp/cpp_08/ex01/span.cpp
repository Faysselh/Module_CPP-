/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 22:19:24 by Fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/05 19:41:41 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
 : _n(0)
{

}

Span::Span(unsigned int n)
 : _n(n)
{

}

Span::Span( const Span &src)
 : _n(src._n)
{

}

Span::~Span()
{

}

void	Span::addNumber(int nb)
{
	if (_vec.size() < _n)
		_vec.push_back(nb);
	else
		throw SpanIsFull();
}

void	Span::addNumber(int from, int to)
{
	std::vector<int>::iterator it;

	for (int i = from; i < to; i++)
	{
		if (_vec.size() < _n)
			_vec.push_back(i);
		else
			throw SpanIsFull();
	}
}

int		Span::shortestSpan() const
{
	if (_vec.size() <= 1)
		throw SpanTooSmall();

	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator it2;

	int min = -1;

	for (it = _vec.begin(); it != _vec.end(); it++)
		for (it2 = _vec.begin(); it2 != _vec.end(); it2++)
			if ((min == -1 || std::abs(*it - *it2) < min) && it != it2)
				min = std::abs(*it - *it2);

	return min;
}

int		Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw SpanTooSmall();

	int max = -1;
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator it2;

	for (it = _vec.begin(); it != _vec.end(); it++)
	{
		for (it2 = _vec.begin(); it2 != _vec.end(); it2++)
			if ((max == -1 || std::abs(*it2 - *it) > max) && it != it2)
				max = std::abs(*it - *it2);
	}
	return max;
}

Span &				Span::operator=(Span const &rhs)
{
	_n = rhs._n;
	_vec = rhs._vec;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}

const char	*Span::SpanIsFull::what() const throw()
{
	return "Error: Span is full !";
}

const char	*Span::SpanTooSmall::what() const throw()
{
	return "Error: Span is to small !";
}

void	Span::print()
{
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		std::cout << _vec[i];
		if (i < _vec.size() - 1)
			std::cout  << " ; ";
	}
	std::cout << std::endl;
}