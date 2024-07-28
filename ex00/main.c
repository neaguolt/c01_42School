/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:23:25 by deb               #+#    #+#             */
/*   Updated: 2024/07/28 16:33:38 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function prototype
void	ft_ft(int	*nbr);

// Check if the number of arguments is correct
// Get the first character of the second argument
	// if (argc != 2)
	// {
	// 	fprintf(stderr, "Usage: %s <character>\n", argv[0]);
	// 	return (1);
	// }
// Call the ft_putchar function
int	main(int argc, char *argv[])
{
	int	numar;

	numar = 34;
	ft_ft(&numar);
	printf("The value is: %d\n", numar);
}
