/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:15:37 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 18:58:11 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>
#include <string.h>

/*FUNCTIONS*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}

/*MAIN*/
/*
int	main()
{
	char	string_origin[] = "Pedrito";
	char	string_destination[]= "Kevin";
	unsigned int	n;
	
	n = 2;
	printf("Original: '%s' - '%s'.", string_origin, string_destination);
	printf("\n");
	ft_strncpy(string_destination, string_origin, n);
	printf("Cambiado: '%s' - '%s'.", string_origin, string_destination);
	return (0);
}
*/
