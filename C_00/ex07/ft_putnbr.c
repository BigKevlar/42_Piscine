/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:50:54 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/06 01:52:27 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <unistd.h>

/*FUNCTIONS*/
void	ft_putnbr(int nb)
{
	int	array[42];
	int	x;
	int	aux;

	if (nb == -2147483648)
		write(1, &nb, 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	x = 0;
	while (nb > 0)
	{
		array[x] = nb % 10;
		nb = nb / 10;
		x = x + 1;
	}
	while (x >= 0)
	{
		x = x - 1;
		aux = array[x] + '0';
		write(1, &aux, 1);
	}
}

/*MAIN*/
/*
int	main(void)
{
	ft_putnbr(0);
	return (0);
}
*/
