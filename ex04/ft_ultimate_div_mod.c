/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 07:31:07 by deb               #+#    #+#             */
/*   Updated: 2024/07/29 07:45:08 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	p_div;
	int	p_mod;

	p_div = 9;
	p_mod = 4;
	ft_ultimate_div_mod(&p_div, &p_mod);
	printf("Result division: %d\nResult reminder: %d\n", p_div, p_mod);
	return (0);
}*/
