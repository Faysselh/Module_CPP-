/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:08:15 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/13 20:08:16 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
		int _fix;
		int static const _nbit = 8;
	public:
		Fixed(void);
        Fixed(const int n);
        Fixed(const float f);
		Fixed(const Fixed&autre);
		~Fixed(void);
		Fixed &operator=(const Fixed&nb);
		int  getRawBits(void) const;
		void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &flux, const Fixed&num);
#endif
