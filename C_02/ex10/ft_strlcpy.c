/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:56:29 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 14:52:11 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>
#include <string.h>

/*FUNCTIONS*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;

	cont = 0;
	if (size != 0)
	{
		while (src[cont] != '\0' && cont < size - 1)
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
		while (src[cont] != '\0')
			cont++;
	}
	else
	{
		while (src[cont])
			cont++;
	}
	return (cont);
}

/*MAIN*/
/*
int	main()
{
	char	str1[] = "hola";
	char	str2[] = "caracola";
	unsigned int	num = 3;
	
	printf ("%u\n", ft_strlcpy(str2, str1, num));
	printf ("%s\n", str1);
	printf ("%s\n", str2);
	return (0);
}
*/
