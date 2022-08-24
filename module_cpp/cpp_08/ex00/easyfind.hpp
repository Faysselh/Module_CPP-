/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:17:45 by Fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/03 23:17:46 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>

# include <exception>
# include <vector>
# include <list>
# include <deque>
# include <map>
# include <set>

# include <time.h>
# include <stdlib.h>

class NothingFound: public std::exception
{
	public:
		char const *what() const throw()
		{
			return ("Nothing find until the end of this container");
		}
};

template <typename T>
typename T::iterator easyfind(T&nb, int i)
{
	typename T::iterator it = std::find(nb.begin(), nb.end(), i);
	if (it == nb.end())
		throw NothingFound();
	return (it);
}
#endif