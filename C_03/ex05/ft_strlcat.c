/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:05:17 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 12:22:24 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//AQUI HAY DOS FUNCIONES. LA PRIMERA SOLO PARA VER
//LA LONGUITUD DE LOS ARRAYS...
int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}
//...Y LA SEGUNDA ...........

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cont1;
	unsigned int	cont2;
	unsigned int	d_len;
	unsigned int	s_len;

	cont1 = 0;
	cont2 = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (*src == 0 || *dest == 0)
		return (0);
	if (size == 0 || size <= d_len)
		return (s_len + size);
	while (src[cont1] != '\n' && cont1 < size - d_len - 1)
	{
		dest[cont2] = src [cont1];
		cont1++;
		cont2++;
	}
	dest[cont2] = '\0';
	return (d_len + s_len);
}
/*
int	main(void)
{
	char	src[] = "";
	char	dest[] = "world";
	int		n = 1;

	printf ("Origen: %s\n", src);
	printf ("Destino: %s\n", dest);
	printf ("Mi funcion: %u\n", ft_strlcat(dest, src, n));
	printf ("Funcion original: %lu\n", strlcat(dest, src, n));
	return (0);
}
*/
