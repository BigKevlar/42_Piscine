/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 07:01:04 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/23 09:39:43 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//LA FAMOSISIMA FUNCION ATOI SIRVE PARA CONVERTIR UN ARRAY DE CARACTERES
//PASADOS POR PARAMETROS Y DEVULVE LOS PRIMEROS DIGITOS NUMERICOS.
int	ft_atoi(char *str)
{
	int	cont;
	int	nb;
	int	neg;

	cont = 0;
	nb = 0;
	neg = 1;
	while (str[cont] == ' ' || str[cont] == '\t' || str[cont] == \
	'\v' || str[cont] == '\f' || str[cont] == '\n' || str[cont] == '\r')
		cont++;
	while (str[cont] == '-' || str[cont] == '+')
	{	
		if (str[cont] == '-')
			neg *= -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9' && str[cont] != '\0')
	{
		nb = nb * 10 + ((int)str[cont] - '0');
		cont++;
	}
	return (nb * neg);
}
/*
int	main (void)
{
	char	test[] = " --a--+--+1234ab567";

	printf ("%d\n", ft_atoi(test));
	printf ("%d\n", atoi(test));
	return (0);
}
*/
