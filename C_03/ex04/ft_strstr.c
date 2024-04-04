/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:45:02 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 11:51:30 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//DEBE ENCONTRAR UN STRING LA BUSQUEDA Y MOSTRASLA CON LO DEMAS. 
char	*ft_strstr(char *str, char *to_find)
{
	int	cont1;
	int	cont2;

	cont1 = 0;
	cont2 = 0;
	if (to_find[cont2] == '\0')
		return (str);
	while (str[cont1] != '\0')
	{
		while (str[cont1 + cont2] == to_find[cont2] && \
		(str[cont1 + cont2] != '\0'))
			cont2++;
		if (to_find[cont2] == '\0')
			return (str + cont1);
		cont1++;
		cont2 = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "hellocodeworld";
	char	to_find[] = "code";

	printf ("Origen: %s\n", str);
	printf ("Busqueda: %s\n", to_find);
	printf ("Cadena encontrada: %s\n", ft_strstr(str, to_find));
	return (0);
}
*/
