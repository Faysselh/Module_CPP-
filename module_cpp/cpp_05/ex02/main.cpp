/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:10:55 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 18:10:57 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*int		main()
{
	try
	{
		Bureaucrat karim("Dolu", 151); //do some stuff with bureaucrats
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;  //handle exception
	}
	try
	{
		Bureaucrat Boy("Naruotao", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}*/

int main()
{
    {
        Bureaucrat  Dolu("Dolu", 146);
        Bureaucrat  Karim("Karim", 40);
        ShrubberyCreationForm   Fayss("fayss");    // 145, 137
        RobotomyRequestForm     Form2("Form2");     // 72, 45

        Karim.signForm(Fayss);
        Karim.executeForm(Fayss);
        Dolu.signForm(Fayss);
        Dolu.executeForm(Fayss);

        Karim.signForm(Form2);
        Karim.executeForm(Form2);
    }

    {
        Bureaucrat min = Bureaucrat("min", 149);
	    Bureaucrat top = Bureaucrat("top", 1);
	    ShrubberyCreationForm shrub = ShrubberyCreationForm("France");
	    RobotomyRequestForm robot = RobotomyRequestForm("Belgique");
	    PresidentialPardonForm pres = PresidentialPardonForm("USA");

	    std::cout << "\n\n Shruberry " << std::endl << std::endl;
	    std::cout << shrub << std::endl;
	    shrub.execute(top);
	    top.signForm(shrub);
	    std::cout << shrub << std::endl;
	    shrub.execute(min);
	    shrub.execute(top);

	    std::cout << "\n\n Robotomy " << std::endl << std::endl;
	    std::cout << robot << std::endl;
	    robot.execute(top);
	    top.signForm(robot);
	    std::cout << robot << std::endl;
	    robot.execute(min);
	    robot.execute(top);

	    std::cout << "\n\n President " << std::endl << std::endl;
	    std::cout << pres << std::endl;
	    pres.execute(top);
	    top.signForm(pres);
	    std::cout << pres << std::endl;
	    pres.execute(min);
	    pres.execute(top);
	    min.executeForm(pres);
    }
    return (0);
}