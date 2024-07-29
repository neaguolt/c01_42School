/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:59:57 by deb               #+#    #+#             */
/*   Updated: 2024/07/29 15:46:29 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	it1;
	int	it2;

	it1 = 0;
	while (it1 < (size - 1))
	{
		it2 = it1 + 1;
		while (it2 > 0)
		{
			if (tab[it2] < tab[it2 - 1])
			{
				temp = tab[it2];
				tab[it2] = tab[it2 - 1];
				tab[it2 - 1] = temp;
			}
			it2--;
		}
		it1++;
	}
}
/*
int	main(void)
{
	int	array[4];
	int	it;

	array[0] = 3;
	array[1] = 5;
	array[2] = 1;
	array[3] = 2;
	ft_sort_int_tab(array, 4);
	it = 0;
	while (it < 4)
	{
		printf("%d ", array[it++]);
	}
	printf("\n");
} */
