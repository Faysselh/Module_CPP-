/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:10:43 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 18:10:45 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Heuss"), _note(150)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int note) : _name(name), _note(note)
{
	if (this->_note < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_note > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Assignation Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat&copie) : _name(copie._name)
{
	std::cout << "Copie Bureaucrat constructor called" << std::endl;
	this->_note = copie._note;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat&nb)
{
	std::cout << "Operator Bureaucrat Assignation called" << std::endl; 
	this->_note = nb._note;
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_note);
}

void	Bureaucrat::IncGrade()
{
	if (this->_note == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_note--;
}

void	Bureaucrat::DecGrade()
{
	if (this->_note == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_note++;
}

std::ostream &operator<<(std::ostream&flux, const Bureaucrat&nb)
{
	flux << nb.getName() << ", bureaucrat grade " << nb.getGrade() << std::endl;
	return (flux);
}