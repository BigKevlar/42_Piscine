/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:36:37 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 01:22:38 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>
#include <string.h>

/*FUNCTIONS*/
char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}

/*MAIN*/
/*
int	main()
{
	char	string_origin[] = "Pedrito";
	char	string_destination[]= "Kevin";

	printf("Original: '%s' - '%s'.", string_origin, string_destination);
	printf("\n");
	ft_strcpy(string_destination, string_origin);
	printf("Cambiado: '%s' - '%s'.", string_origin, string_destination);
	return (0);
}
*/
