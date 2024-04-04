/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:44:31 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/06 02:11:55 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <unistd.h>

/*FUNCTIONS*/
void	ft_print_numbers(void)
{
	int	n;
	int	i;

	n = 0;
	while (n < 10)
	{
		i = n + '0';
		write(1, &i, 1);
		n++;
	}
}

/*MAIN*/
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
