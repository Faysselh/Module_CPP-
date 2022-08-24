/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:25:08 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 20:25:27 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Fayss"), _signed(0), _grade_sign(75), _grade_ex(75)
{
	std::cout << "Default Form constructor called" << std::endl;
	return ;
}

Form::Form(const Form&copie) : _name(copie._name), _signed(copie._signed), _grade_sign(copie._grade_sign), _grade_ex(copie._grade_ex)
{
	std::cout << "Copie Form constructor called" << std::endl;
	return ;
}

Form::Form(const std::string name, int grade_si, int grade_ex) : _name(name), _signed(0), _grade_sign(grade_si), _grade_ex(grade_ex)
{
	if (this->_grade_ex > 150  || this->_grade_sign > 150)
        throw Form::GradeTooLowException();
    if (this->_grade_ex < 1 || this->_grade_sign < 1)
        throw Form::GradeTooHighException();
	std::cout << "Assignation Form constructor called" << std::endl;
	return ;
}

Form	&Form::operator=(const Form &nb)
{
	std::cout << "Operator Form assignation called" << std::endl;
	this->_signed = nb._signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor Form called" << std::endl;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool	Form::getSign() const
{
	return (this->_signed);
}

int		Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int		Form::getGradeEx() const
{
	return (this->_grade_ex);
}

void	Form::beSigned(const Bureaucrat&boy)
{
	try
    {
        if (boy.getGrade() > this->getGradeSign())
            throw   Form::GradeTooLowException(); // lever une exception
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    this->_signed = 1;
}

std::ostream    &operator<<(std::ostream &flux, const Form &form)
{
    flux << "name of form: " << form.getName() << " signed: " << form.getSign() << " grade_to_signed ";
	flux << form.getGradeSign() << " grade_to_exec " << form.getGradeEx() << std::endl;
    return (flux);
}