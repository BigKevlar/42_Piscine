/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 06:20:19 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/23 02:25:30 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//AUNQUE PAREZCA COMPLEJA, ESTA FUNCION SOLO MUESTRA UN NUMERO
//PASADO POR PARAMETRO, PERO PRIMERO USAMOS UNA FUNCION PARA
//AUTOMATIZAR EL WRITE.
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
/*
int	main(void)
{
	ft_putnbr(4200000);
	return (0);
}
*/
