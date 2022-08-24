/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:10:51 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 18:10:52 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int		_note;
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Grade promotion is too high");
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Grade promotion is too low");
			}
		};
		Bureaucrat();
		Bureaucrat(const Bureaucrat&copie);
		Bureaucrat(const std::string name, int note);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat&nb);
		const std::string getName() const;
		int		getGrade() const;
		void	IncGrade(void);
		void	DecGrade(void);
		void	signForm(Form &form);
		void	executeForm(const Form &form);
};

std::ostream	&operator<<(std::ostream &flux, const Bureaucrat&nb);
#endif
