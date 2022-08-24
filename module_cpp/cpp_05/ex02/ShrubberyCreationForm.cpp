/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:23:22 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/29 14:23:25 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("no_name")
{
    std::cout << "constructor ShrubberyCreationForm has been called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "constructor ShrubberyCreationForm has been called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copie) : Form(copie), _target(copie._target)
{
    std::cout << "constructor by copie ShrubberyCreationForm has been called" << std::endl;
    return ;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & a)
{
    Form::operator=(a);
    std::cout << "Assignation ShrubberyCreationForm" << std::endl;
    this->_target = a._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Destructor ShrubberyCreationForm has been called" << std::endl;
    return ;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 0)
    {
        std::cerr << "the Form " << this->getName() <<" is not sign" << std::endl;
        return ;
    }
    try
    {
        if (this->getGradeEx() < executor.getGrade())
            throw   Form::GradeTooLowException();
        std::string file = this->_target + "_shrubbery";
        std::fstream    f(file.c_str(), std::ios_base::out);
        
        f << "    0    " << "       " << "    0    " << std::endl;
        f << "   000   " << "       " << "   000   " << std::endl;
        f << "  00000  " << "       " << "  00000  " << std::endl;
        f << "   000   " << "       " << "   000   " << std::endl;
        f << "  00000  " << "       " << "  00000  " << std::endl;
        f << " 0000000 " << "       " << " 0000000 " << std::endl;
        f << "  00000  " << "       " << "  00000  " << std::endl;
        f << " 0000000 " << "       " << " 0000000 " << std::endl;
        f << "000000000" << "       " << "000000000" << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "█████████████████████████████████████" << std::endl;
        f << "█████████████████████████████████████" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

