/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayel-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:31:37 by fayel-ha          #+#    #+#             */
/*   Updated: 2020/02/07 10:27:16 by fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int stock;
	int count;

	i = 0;
	stock = 0;
	count = 0;
	while (count == 0)
	{
		count = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				stock = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = stock;
				count = 0;
			}
			i++;
		}
		i = 0;
	}
}
