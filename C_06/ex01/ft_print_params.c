/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:28:23 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/23 04:05:03 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//MUESTRA LOS ARGUMENTOS POR COMANDOS, ORDENADOS EN LINEA.
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	cont1;
	int	cont2;

	cont2 = 1;
	while (cont2 < argc)
	{
		cont1 = 0;
		while (argv[cont2][cont1] != '\0')
		{
			ft_putchar(argv[cont2][cont1]);
			cont1++;
		}
		ft_putchar ('\n');
		cont2++;
	}
	return (0);
}

//./a.out test1 test2 test3 | cat -e