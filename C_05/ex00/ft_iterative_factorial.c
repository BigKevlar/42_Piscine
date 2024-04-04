/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:24:58 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/23 09:46:49 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//ESTA FUNCION ITERATIVA, O BUCLE, DEVUELVE UN NUMERO, RESULTADO DE
//LA OPERACION FACTORIAL DEL MISMO.
int	ft_iterative_factorial(int nb)
{
	int	cont;
	int	result;

	cont = 0;
	result = 1;	
	if (nb < 0)
		return (0);
	while (cont <= nb)
	{
		result *= cont;
		cont--;
	}
	return (result);
}

int	main ()
{
	int	number;
	
	number = ft_iterative_factorial(26);
	printf ("%d", number);
	return (0);
}