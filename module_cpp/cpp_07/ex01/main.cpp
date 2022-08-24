/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:40:30 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/31 18:40:31 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	{
    int a[3] = {1, 2, 3};
    //int b[3] = {4, 5, 6};
    ::iter(a, 3, print_tab_elem);
    }
    std::cout << std::endl << "/////// " << std::endl << std::endl;
    {
        int array[3] = {1, 2, 3};
	    ::iter(array, 3, &print_tab_elem);
        std::cout << std::endl << "///////" << std::endl << std::endl;
	    long arrayl[3] = {300, 20, 12};
	    ::iter(arrayl, 3, &print_tab_elem);
    }
	return (0);
}