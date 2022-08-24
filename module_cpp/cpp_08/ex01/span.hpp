/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 22:19:30 by Fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/04 22:19:31 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <iterator>
# include <cmath>

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		void	addNumber(int nb);
		void	addNumber(int from, int to);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	print();

		Span	&operator=(Span const &rhs);

		class SpanIsFull : public std::exception
		{
			virtual const char *what() const throw();
		};

		class SpanTooSmall : public std::exception
		{
			virtual const char *what() const throw();
		};

	private:
		unsigned int		_n;
		std::vector<int>	_vec;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif