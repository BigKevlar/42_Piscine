/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:19:04 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/06 02:07:36 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIES*/
#include <unistd.h>

/*FUNCTIONS*/
void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
}

/*MAIN*/
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
