/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:21:17 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/07 07:01:47 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <unistd.h>

/*FUNCTIONS*/
void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			c = x / 10 + 48;
			write(1, &c, 1);
			c = x % 10 + 48;
			write(1, &c, 1);
			write(1, " ", 1);
			c = y / 10 + 48;
			write (1, &c, 1);
			c = y % 10 + 48;
			write (1, &c, 1);
			if (x != 98)
				write (1, ", ", 2);
			y++;
		}
	x++;
	}
}

/*MAIN*/
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
