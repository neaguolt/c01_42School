/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:31:31 by deb               #+#    #+#             */
/*   Updated: 2024/07/28 19:54:03 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//function prototype
void	ft_ultimate_ft(int *********nbr);

//function declaration
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int	main(void)
{
	int	numar;

	numar = 34;
	// Manually create the chain of pointers
    int *ptr1 = &numar;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	printf("The value is: %d\n", numar);
	return (0);
}*/
