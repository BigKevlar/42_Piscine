/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:52:31 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/16 15:51:20 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	if (str[cont] == '\0')
		return (1);
	while (str[cont] != '\0')
	{
		if (str[cont] < '0' || str[cont] > '9')
			return (0);
		cont++;
	}
	return (1);
}

/*MAIN*/
/*
int	main()
{
	if (ft_str_is_numeric(""))
		printf("1");
	else
		printf("0");
	return (0);
}
*/
