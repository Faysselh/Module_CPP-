/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:17:44 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/21 20:17:46 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Cat.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	protected:

	public:
		Cat();
		Cat(const Cat&copie);
		Cat	&operator=(const Cat&nb);
		virtual ~Cat();
		void makeSound() const;
};

#endif