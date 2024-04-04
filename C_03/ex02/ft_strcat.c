/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:55:22 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 04:42:47 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//CONCATENA (JUNTA) DOS STRING.
char	*ft_strcat(char *dest, char *src)
{
	int	cont1;
	int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (dest[cont1] != '\0')
		cont1++;
	while (src[cont2] != '\0')
	{
		dest[cont1] = src[cont2];
		cont1++;
		cont2++;
	}
	dest[cont1] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "hello";
	char	dest[] = "world";
	
	printf ("Origen: %s\n", src);
	printf ("Destino: %s\n", dest);
	printf ("Todo junto: %s\n", ft_strcat(dest, src));
	return (0);
}
*/
