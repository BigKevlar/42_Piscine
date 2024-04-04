/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:06:37 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/21 13:14:27 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <stdio.h>

/*FUNCTIONS*/
int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (!(str[cont] >= 32 && str[cont] <= 126))
			return (0);
		else
			cont++;
	}
	return (1);
}

/*MAIN*/
/*
int	main()
{
	if (ft_str_is_printable("\nd/C5$"))
		printf ("1");
	else
		printf ("0");
	return (0);
}
*/
