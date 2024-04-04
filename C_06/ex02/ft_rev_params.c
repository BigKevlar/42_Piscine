/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:28:25 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/23 18:35:59 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

////MUESTRA LOS ARGUMENTOS POR COMANDOS, ORDENADOS AL REVES.
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	cont1;
	int	cont2;

	cont1 = argc - 1;
	while (cont1 > 0)
	{
		cont2 = 0;
		while (argv[cont1][cont2] != '\0' && argc)
		{
			ft_putchar(argv[cont1][cont2]);
			cont2++;
		}
		ft_putchar('\n');
		cont1--;
	}
	return (0);
}

//./a.out test1 test2 test3 | cat -e