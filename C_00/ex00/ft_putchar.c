/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:24:49 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/06 02:05:36 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <unistd.h>

/*FUNCTIONS*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*MAIN*/
/*
int	main(void)
{
	ft_putchar('j');
	return (0);
}
*/
