/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:51:49 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/16 15:51:54 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	if (str[cont] == '\0')
		return (1);
	while (str[cont] != '\0')
	{
		if (!((str[cont]) >= 'A' && (str[cont]) <= 'Z'))
			return (0);
		cont++;
	}
	return (1);
}

/*MAIN*/
/*
int main ()
{
	if (ft_str_is_uppercase("HOLA"))
		printf("1");
	else
		printf("0");
	return (0);
}
*/
