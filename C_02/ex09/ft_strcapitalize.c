/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:26:13 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 18:50:26 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
char	*ft_strcapitalize(char *str)
{
	int	cont;

	cont = 0;
	while (*str == ' ')
	{
		str++;
	}
	if (str[cont] >= 'a' && str[cont] <= 'z')
		str[cont] -= 32;
	cont++;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		str[cont] += 32;
		if ((str[cont - 1] < '0') && (str[cont] >= 'a') && \
		(str[cont] <= 'z'))
			str[cont] -= 32;
		cont++;
	}
	return (str);
}

/*MAIN*/
/*
int	main()
{
	char	phrase[] = "      JAJholA que tal estA-mos equ.Ipo 42mario";
	printf ("%s\n", ft_strcapitalize(phrase));
	return (0);
}
*/
