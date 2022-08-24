/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:34:50 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/06 20:35:33 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int _fix;
		int static const _nbit = 8;
	public:
		Fixed(void);
		Fixed(const Fixed&autre);
		~Fixed(void);
		Fixed &operator=(const Fixed&nb);
		int  getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif
