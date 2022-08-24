/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:38:00 by fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/29 18:38:01 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
 : _char(0), _int(0), _float(0), _double(0), _prec(0)
{
	this->print();
}

Convert::Convert(std::string param)
 : _char(0), _int(0), _float(0), _double(static_cast<double>(atof(param.c_str()))), _prec(this->getPrec(param.c_str()))
{
	if (param.length() == 1 && std::isalpha(param[0]))
	{
		_double = static_cast<char>(param[0]);
		this->print();
	}
	else
	{
		unsigned int i = 0;
		if (param[0] == '+' || param[0] == '-')
			i++;
		if (param != "+inff" && param != "-inff" && param != "nanf" && param != "+inf" && param != "-inf" && param != "nan")
		{
			while (i < param.length())
			{
				if (std::isalpha(param[i]) && (!(param[i] == 'f' && i == param.length() - 1)))
				{
					std::cout << "Error in argument" << std::endl;
					return ;
				}
				i++;
			}
		}
		if (param[param.length() - 1] == 'f')
		{
			_float = atof(param.c_str());
			_double = static_cast<double>(_float);
		}
		else
			_double = static_cast<double>(atof(param.c_str()));
		this->print();
	}
}

Convert::Convert(const Convert &src)
{
	_char = src._char;
	_int = src._int;
	_float = src._float;
	_double = src._double;
	_prec = src._prec;
}

Convert::~Convert()
{

}

Convert		&Convert::operator=(Convert const &src)
{
	_char = src._char;
	_int = src._int;
	_float = src._float;
	_double = src._double;
	return *this;
}

void	Convert::printChar()
{
	std::cout << "char : ";
	if (std::isnan(_double) || _double > CHAR_MAX || _double < CHAR_MIN || errno == ERANGE)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	_char = static_cast<char>(_double);
	if (!std::isprint(_char))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << _char << '\'' << std::endl;
}

void	Convert::printInt()
{
	std::cout << "int: ";
	if (std::isnan(_double) || std::isinf(_double)
		|| _double > static_cast<double>(INT_MAX)
		|| _double < static_cast<double>(INT_MIN)
		|| errno == ERANGE)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_double) << std::endl;
}

int		Convert::getPrec(const char *str)
{
	unsigned int	before;
	unsigned int	after;

	before = 0;
	while (str[before] && str[before] != '.')
		before++;
	after = before + 1;
	while (str[after] && std::isdigit(str[after]))
		after++;
	after -= before;
	return ((strlen(str) == before || after == 1) ? 1 : after - 1);	
}

void	Convert::printFloat()
{
	if (errno == ERANGE)
		std::cout << "float: impossible" << std::endl;
	std::cout << "float: " << std::setprecision(_prec) << std::fixed << static_cast<float>(_double) << "f" << std::endl;
}

char	Convert::getChar() const
{
	return _char;
}

int		Convert::getInt() const
{
	return _int;
}

float	Convert::getFloat() const
{
	return _float;
}

double	Convert::getDouble() const
{
	return _double;
}

int		Convert::getPrecision() const
{
	return _prec;
}

std::ostream	&operator<<(std::ostream &o, Convert const &i)
{
	(void)i;
	o << std::setprecision(i.getPrecision()) << std::fixed << i.getDouble();
	return o;
}

void			Convert::print()
{
	this->printChar();
	this->printInt();
	this->printFloat();
	if (errno == ERANGE)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << std::setprecision(_prec) << std::fixed << _double << std::endl;
}