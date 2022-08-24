/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:58:11 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/10/13 17:58:42 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <vector>
#include <sstream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		std::string	get_val(std::string str)
		{
			if (str == "first_name")
				return (this->first_name);
			if (str == "last_name")
				return (this->last_name);
			if (str == "nickname")
				return (this->nickname);
			if (str == "phone_number")
				return (this->phone_number);
			if (str == "darkest_secret")
				return (this->darkest_secret);
			return (NULL);
		}
		void	attribute_val(std::string str, std::string name)
		{
			if (str == "first_name")
				this->first_name = name;
			if (str == "last_name")
				this->last_name = name;
			if (str == "nickname")
				this->nickname = name;
			if (str == "phone_number")
				this->phone_number = name;
			if (str == "darkest_secret")
				this->darkest_secret = name;
		}
};

class Phonebook
{
	public:

	Contact list[8];
};

Contact	ft_add(void);
int		ft_exit(void);
void    ft_search(Phonebook list, size_t size);
void	ft_print(Contact list);
void	print_search(std::string str);

#endif
