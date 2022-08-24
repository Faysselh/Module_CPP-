/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:19:35 by fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/05 19:11:52 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>
# include <queue>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack()
		 : std::stack<T>()
		{

		}
		MutantStack(MutantStack const &src)
		 : std::stack<T>(src)
		{

		}
		virtual ~MutantStack() {}

		MutantStack &		operator=( MutantStack const & rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		//std::stack<T>::container_type::iterator	begin()
		iterator	begin()
		{
			return this->c.begin();
		}

		//std::stack<T>::container_type::iterator	end()
		iterator	end()
		{
			return this->c.end();
		}

		reverse_iterator	rbegin()
		{
			return this->c.rbegin();
		}

		//std::stack<T>::container_type::iterator	end()
		reverse_iterator	rend()
		{
			return this->c.rend();
		}

	private:

};

template<typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif