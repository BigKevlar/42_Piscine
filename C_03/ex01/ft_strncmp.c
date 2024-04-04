/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:30:42 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 12:22:04 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//LO MISMO QUE ANTES PERO COMPARA N CARACTERES, Y TAMBIEN LO DEL ASCII.
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((s1[cont] != '\0' || s2[cont] != '\0') && cont < n)
	{
		if (s1[cont] > s2[cont])
			return (s1[cont] - s2[cont]);
		else if (s1[cont] < s2[cont])
			return (s1[cont] - s2[cont]);
		++cont;
	}
	return (0);
}
/*
int	main (void)
{
	char	str1[] = "Eustaquio";
	char	str2[] = "Eusstaquio";
	unsigned int num = 4;
	int	resultado = ft_strncmp(str1, str2, num);

	if (resultado == 0)
		printf("%d", resultado);
	else if (resultado > 0)
		printf("%d", resultado);
	else
		printf("%d", resultado);
	printf ("\n%d", strncmp(str1, str2, num));
	return (0);
}
*/
