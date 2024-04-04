/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:31:30 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/13 19:01:51 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIE*/
#include <stdio.h>

/*FUNCTIONS*/
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n = n + 1;
	}
	return (n);
}

/*MAIN*/
/*
int main ()
{
	int phrase;

	phrase = ft_strlen("pepito");
	printf("Este string tiene %d caracteres.", phrase);
	return (0);
}
*/
