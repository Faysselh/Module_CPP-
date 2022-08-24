/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:37:56 by fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/29 18:37:57 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <cstdlib>
# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <math.h>
# include <cfloat>
# include <cmath>
# include <cerrno>

class Convert
{
	private:
		void	convert_to_char();
		void	convert_to_int();
		void	convert_to_float();
		int		getPrec(const char *str);

		char	_char;
		int		_int;
		float	_float;
		double	_double;
		int		_prec;
	public:
		Convert();
		Convert(std::string param);
		Convert(Convert const & src);
		~Convert();

		void	print();

		void	printChar();
		void	printInt();
		void	printFloat();

		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;
		int		getPrecision() const;

		Convert &		operator=( Convert const & rhs );
};

std::ostream &			operator<<( std::ostream & o, Convert const & i );
#endif
