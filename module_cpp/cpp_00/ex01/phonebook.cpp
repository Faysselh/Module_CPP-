/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:56:32 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/10/13 17:56:35 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char ** argv)
{
	(void)argv;
	size_t i;
	std::string input, add, search, exit;
	Phonebook phonebook;

	if (argc != 1)
		return (0);
	i = 0;
	add = "ADD";
	search = "SEARCH";
	exit = "EXIT";
	std::cout << "Entrer une commande : ADD | SEARCH | EXIT" << std::endl;
	while (std::getline(std::cin, input))
	{
		if (input == add)
		{
			if (i == 8)
				std::cout << "No more space to add one more contact" << std::endl;
			else
			{
				phonebook.list[i] = ft_add();
				i++;
			}
		}
		if (input == search)
			ft_search(phonebook, i);
		if (input == exit && ft_exit() == 1)
			return (0);
		else if (input != search && input != add && input != exit)
			std::cout << "Error: Entrer une commande valide (ADD, SEARCH, EXIT):" << std::endl;
	}
	return (0);
}
