/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:17:30 by Fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/05 19:42:35 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	 try
	 {
	 	std::cout << "\e[31m\e[1m/**************Pour Vector*************/ " <<  "\e[0m" << std::endl;
	 	std::vector<int>nbr(6);
	 	nbr[0] = 52;
	 	nbr[1] = 1;
	 	nbr[2] = 56;
	 	nbr[3] = 96;
	 	nbr[4] = 46;
	 	nbr[5] = 41;
	 	easyfind(nbr, 42);

	 	//std::cout << "\e[31m\e[1m/**************Pour List*************/ " <<  "\e[0m" << std::endl;
		/*std::list<int>nbr2;
	 	nbr2.push_back(12);
	 	nbr2.push_back(13);
	 	nbr2.push_back(14);
	 	nbr2.push_back(15);
	 	nbr2.push_back(50);
	 	nbr2.push_back(41);
	 	easyfind(nbr2, 42);*/
	 }

	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}
		
	return (0);
}