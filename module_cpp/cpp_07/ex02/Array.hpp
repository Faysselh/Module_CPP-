/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:54:22 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/31 18:54:23 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T *_tab;
		unsigned int _size;
	public:
		Array(): _tab(NULL), _size(0){}
		Array(unsigned int n): _tab(new T[n]), _size(n){}
		Array(const Array& copie): _tab(new T[copie._size]), _size(copie._size){}
		Array &operator=(const Array &nb)
		{
			delete [] this->_tab;
			this->_tab = new T[nb._size];
			this->_size = nb._size;
			for (unsigned int i = 0; i < this->_size; i++)
				this->_tab[i] = nb._tab[i];
			return (*this);
		}

		~Array()
		{
			delete [] this->_tab;
		}

		class OutOfLimits: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("We are out of limits for this Array");
				}
		};

		T &operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw Array::OutOfLimits();
			return (this->_tab[i]);
		}
		unsigned int size() const
		{
			return (this->_size);
		}
};

#endif