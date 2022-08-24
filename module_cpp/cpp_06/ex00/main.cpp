/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:29:43 by fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/29 18:29:46 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int     main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error Invalid Arguments:" << std::endl;
		std::cout << "Convert require one argument !" << std::endl;
		return (0);
	}
	Convert convert(av[1]);
	return (0);
}
