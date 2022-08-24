/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 02:46:20 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 02:46:21 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Everything";
	}
}

Brain::Brain(const Brain&copie)
{
	std::cout << "Copie Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copie.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain&nb)
{
	std::cout << "Assignation Brain operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = nb.ideas[i];
	}
	return (*this);
}