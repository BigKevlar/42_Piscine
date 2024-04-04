/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:43:44 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/22 06:18:41 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//LA USAREMOS PARA IMPRIMIR UN STRING.
void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		write (1, &str[cont], 1);
		cont++;
	}
}
/*
int	main (void)
{
	char	phrase[] = "HEEYYYMACARENA";
	
	ft_putstr(phrase);
	return (0);
}
*/
