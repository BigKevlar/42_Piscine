/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:32:27 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 06:12:10 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//SIRVE PARA VER LA LONGUITUD DE LOS ARRAYS.
int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}
/*
int	main (void)
{
	char	phrase[] = "42malaga";
	
	printf ("%d", ft_strlen(phrase));
	return (0);
}
*/
