/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:30:05 by fayel-ha          #+#    #+#             */
/*   Updated: 2020/02/07 10:28:34 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int stock;

	stock = *b;
	*b = *a;
	*a = stock;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	size--;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		i++;
		size--;
	}
}
