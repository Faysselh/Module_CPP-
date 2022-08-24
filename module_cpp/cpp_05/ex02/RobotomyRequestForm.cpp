/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:23:54 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/29 14:23:57 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("no_name")
{
    std::cout << "constructor RobotomyRequestForm has been called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "constructor RobotomyRequestForm has been called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copie) : Form(copie), _target(copie._target)
{
    std::cout << "constructor by copie RobotomyRequestForm has been called" << std::endl;
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & a)
{
    Form::operator=(a);
    std::cout << "RobotomyRequestForm" << std::endl;
    this->_target = a._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Destructor RobotomyRequestForm has been called" << std::endl;
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 0)
    {
        std::cerr << "the Form " << this->getName() << " is not sign" << std::endl;
        return ;
    }
    try
    {
        if (this->getGradeEx() < executor.getGrade())
            throw   Form::GradeTooLowException();
        std::cout << "Sound of the the drill" << std::endl;
        std::srand(std::time(NULL));
        
        if ((rand() % 2) == 0)
            std::cout << this->_target <<  " a bien été robotomizée" << std::endl;
        else
            std::cout << this->_target <<  " n'a pas été robotomizée" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}