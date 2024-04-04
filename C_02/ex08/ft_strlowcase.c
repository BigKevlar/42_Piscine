/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:16:35 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 02:47:17 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 65 && str[cont] <= 90)
			str[cont] += 32;
		cont++;
	}
	return (str);
}

/*MAIN*/
/*
int	main()
{
	char	phrase[] = "HoLA";
	printf ("%s\n", ft_strlowcase(phrase));
	return (0);
}
*/
