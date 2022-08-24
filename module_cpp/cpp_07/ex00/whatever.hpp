/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.Hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:29:53 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/31 17:29:54 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif