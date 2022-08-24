/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:40:23 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/31 18:40:24 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *tab, const unsigned int size, void F(T &element))
{
	for (unsigned int i = 0; i < size; i++)
		F(tab[i]);
	return ;
}

template <typename T>
void	print_tab_elem(T& elem)
{
	std::cout << elem << std::endl;
	return ;
}

#endif
