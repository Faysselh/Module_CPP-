/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 02:46:15 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/28 19:37:09 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int     main()
{
	/*const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;*/

	const Animal *all[100];
	for (int i = 0; i < 50; i++)
	{
		all[i] = new Dog();
	}
	for (int i = 50; i < 100; i++)
	{
		all[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Animal Number: " << i << std::endl;
		all[i]->makeSound();
		delete all[i];
	}
	return (0);
}
