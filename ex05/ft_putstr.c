/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:16:24 by deb               #+#    #+#             */
/*   Updated: 2024/07/29 10:38:48 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	it;

	it = 0;
	while (str[it] != '\0')
	{
		write(1, &str[it++], 1);
	}
}
/*
int	main(void)
{
	ft_putstr("Hello!");
	return (0);
}*/
