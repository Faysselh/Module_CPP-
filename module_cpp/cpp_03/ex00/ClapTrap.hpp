/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:49:13 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/15 23:49:14 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _Name;
		unsigned int _Hitpoints;
		unsigned int _Energy_points;
		unsigned int _Attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap&copie);
		ClapTrap(std::string name);
		ClapTrap &operator=(const ClapTrap &nb);
		~ClapTrap(void);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
