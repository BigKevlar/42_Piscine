/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 01:34:42 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/13 10:11:52 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

/*MAIN*/
/*
int main ()
{
	int c;
	int d;

	c = 20;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("El resultado de la division es %d y su resto es %d", c, d);
	return (0);
}
*/
