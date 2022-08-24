/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:20:11 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/11/29 16:57:25 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		ft_strlen(char *str)
{
	int i;

	for (i = 0; str && str[i]; i++);
	return (i);
}

Contact	ft_add(void)
{
	Contact contact;
	std::string f_name, l_name, nickname, ph_nbr, darkest_s;
	
	std::cout << "First_name = "; std::getline(std::cin, f_name);
	std::cout << "Last_name = "; std::getline(std::cin, l_name);
	std::cout << "Nickname = "; std::getline(std::cin, nickname);
	std::cout << "Phone Number = "; std::getline(std::cin, ph_nbr);
	std::cout << "Darkest_secret = "; std::getline(std::cin, darkest_s);
	contact.attribute_val("first_name", f_name);
	contact.attribute_val("last_name", l_name);
	contact.attribute_val("nickname", nickname);
	contact.attribute_val("phone_number", ph_nbr);
	contact.attribute_val("darkest_secret", darkest_s);
	return (contact);
}

void 	ft_print(Contact list)
{
	std::cout << "First_name = "; std::cout << list.get_val("first_name") << std::endl;
	std::cout << "Last_name = "; std::cout << list.get_val("last_name") << std::endl;
	std::cout << "Nickname = "; std::cout << list.get_val("nickname") << std::endl;
	std::cout << "Phone number = "; std::cout << list.get_val("phone_number") << std::endl;
	std::cout << "Darkest_secret = "; std::cout << list.get_val("darkest_secret") << std::endl;
}

void	print_search(std::string str)
{
	size_t len;

	len = 10 - str.length();
	if (str.length() >= 10)
	{
		str.resize(9); std::cout << str << '.';
	}
	else
	{
		while(len)
		{
			std::cout << " ";
			len--;
		}
		std::cout << str;
	}
}

void	ft_search(Phonebook list , size_t size)
{
	std::string id;
	size_t j;
	std::string first_name, last_name, nickname, index;

	std::cout << "   Index  |First_name| Last_name|  Nickname" << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		first_name = list.list[i].get_val("first_name"), last_name = list.list[i].get_val("last_name"), nickname = list.list[i].get_val("nickname");
		index = i + 48;
		print_search(index);
		std::cout << '|';
		print_search(list.list[i].get_val("first_name"));
		std::cout << '|';
		print_search(list.list[i].get_val("last_name"));
		std::cout << '|';
		print_search(list.list[i].get_val("nickname"));
		std::cout << std::endl;
	}
	std::getline(std::cin, id);
	std::istringstream (id) >> j;
	if (j < size)
		ft_print(list.list[j]);
}

int	ft_exit(void)
{
	std::cout << "Exit your contact are lost for ever" << std::endl;
	return (1);
}
