/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:31:28 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/13 10:11:41 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*MAIN*/
/*
int	main()
{
	int	c;
	int	d;
	int	f;
	int	g;

	c = 20;
	d = 5;

	ft_div_mod(c, d, &f, &g);
	printf("El resultado de la division es %d y su resto es %d", f, g);
	return (0);
}
*/
