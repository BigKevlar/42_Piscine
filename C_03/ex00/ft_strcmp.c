/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:14:23 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 04:42:54 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//PARA COMPARAR CADENAS. LAS RESTA Y TE COMPARA EL ASCII.
int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] != '\0' && s2[cont] != '\0' && s1[cont] == s2[cont])
		cont++;
	return (s1[cont] - s2[cont]);
}
/*
int	main (void)
{
	char	str1[] = "Juan";
	char	str2[] = "juan";
	int	resultado = ft_strcmp(str1, str2);

	if (resultado == 0)
		printf("Los string son iguales");
	else if (resultado > 0)
		printf("El string 1 es mayor");
	else
		printf("El string 1 es menor");
	return (0);
}
*/
