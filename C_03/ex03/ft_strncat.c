/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:25:38 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 04:42:43 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//LO MISMO QUE LA ANTERIOR, PERO SOLO LOS CARACTERES QUE QUIERO.
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cont1;
	unsigned int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (dest[cont1] != '\0')
		cont1++;
	while (cont2 < nb && src[cont2] != '\0')
	{
		dest[cont1] = src[cont2];
		cont1++;
		cont2++;
	}
	dest[cont1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "hello";
	char	dest[] = "world";
	unsigned int	nb = 2;
	
	printf ("Origen: %s\n", src);
	printf ("Destino: %s\n", dest);
	printf ("Todo junto: %s\n", ft_strncat(dest, src, nb));
	return (0);
}
*/
