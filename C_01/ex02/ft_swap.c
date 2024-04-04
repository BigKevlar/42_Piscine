/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:47:35 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/13 10:12:04 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*MAIN*/
/*
int	main()
{
	int a;
	int b;
	int *c;
	int *d;

	a = 12;
	b = 34;
	c = &a;
	d = &b;
	ft_swap(c, d);
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	return (0);
}
*/
