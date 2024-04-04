/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:48:35 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/06 02:12:37 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <unistd.h>

/*FUNCTIONS*/
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/*MAIN*/
/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
