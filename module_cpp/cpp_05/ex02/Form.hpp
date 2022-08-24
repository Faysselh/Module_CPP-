/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:25:13 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/22 20:25:14 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_ex;
	public:
		Form();
		Form(const std::string name, int grade_si, int grade_ex);
		Form(const Form&copie);
		virtual ~Form();
		Form &operator=(const Form&nb);
		std::string getName() const;
		bool		getSign() const;
		int			getGradeSign() const;
		int			getGradeEx() const;
		void		beSigned(const Bureaucrat&boy);
		virtual void            execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Form to high for grade promotion");
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Form to low for grade promotion");
			}
		};
};

std::ostream	&operator<<(std::ostream &flux, const Form&form);
#endif