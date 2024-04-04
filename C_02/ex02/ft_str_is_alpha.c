/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:18:02 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/20 02:07:15 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	if (str[cont] == '\0')
		return (1);
	while (str[cont] != '\0')
	{
		if (!((str[cont] >= 'a' && str[cont] <= 'z') || \
		(str[cont] >= 'A' && str[cont] <= 'Z')))
			return (0);
		cont++;
	}
	return (1);
}

/*MAIN*/
/*
int	main()
{
	if (ft_str_is_alpha("hola"))
		printf("1");
	else
		printf("0");
	return (0);
}
*/
