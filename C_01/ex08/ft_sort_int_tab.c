/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:20:53 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/14 09:48:37 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIE*/
#include <stdio.h>

/*FUNCTIONS*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	aux;

	cont = 0;
	while (cont < (size - 1))
	{
		if (tab[cont] > tab[cont + 1])
		{
			aux = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = aux;
			cont = 0;
		}
		else
		cont++;
	}
}

/*MAIN*/
/*
int main()
{
    int tab[] = {5, 6, 3, 1, 4, 2, 6, 7};
    int size;
    int cont;

    cont = 0;
    size = 7;
    ft_sort_int_tab(tab, size);
    while (cont <= size)
    {
        printf("%d", tab[cont]);
        cont++;
    }
    return (0);
}
*/
