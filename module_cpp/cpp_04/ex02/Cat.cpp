/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:17:51 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/21 20:17:52 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat&copie) : Animal(copie)// Copie tout les elements d'Animal dans copie reviens au meme que this->_type = copie.Type
{
	std::cout << "Copie Cat constructor called" << std::endl;
	brain = new Brain(*copie.brain);
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete brain;
}

Cat	&Cat::operator=(const Cat&nb)
{
	std::cout << "Assignation Cat operator called" << std::endl;
	this->_type = nb._type;
	delete this->brain;
	this->brain = new Brain(*nb.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat make kitty noise !!!" << std::endl;
}