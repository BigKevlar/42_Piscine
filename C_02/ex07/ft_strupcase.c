/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:49:48 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 02:47:07 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 97 && str[cont] <= 122)
			str[cont] -= 32;
		cont++;
	}
	return (str);
}

/*MAIN*/
/*
int	main()
{
	char	phrase[] = "hOla";
	printf ("%s\n", ft_strupcase(phrase));
	return (0);
}
*/
