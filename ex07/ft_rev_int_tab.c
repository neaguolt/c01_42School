/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:47:00 by deb               #+#    #+#             */
/*   Updated: 2024/07/29 11:58:19 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	it;
	int	temp;

	it = size / 2;
	while (it-- > 0)
	{
		temp = tab[it];
		tab[it] = tab[(size - 1) - it];
		tab[(size - 1) - it] = temp;
	}
}
/*
int	main(void)
{
	int	array[4];
	int	i;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	ft_rev_int_tab(array, 4);
	i = 0;
	printf("Reversed array: ");
	while (i < 4, i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return (0);
}*/
