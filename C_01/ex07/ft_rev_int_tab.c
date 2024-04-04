/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:58:59 by jmartos-          #+#    #+#             */
/*   Updated: 2023/02/13 16:58:48 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARIE*/
#include <stdio.h>

/*FUNCTIONS*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	aux;

	cont = 0;
	while (cont < size)
	{
		aux = tab[cont];
		tab[cont] = tab[size];
		tab[size] = aux;
		cont++;
		size--;
	}
}

/*MAIN*/
/*
int main()
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int size;
    int cont;

    cont = 0;
    size = 7;
    ft_rev_int_tab(tab, size);
    while (cont <= size)
    {
        printf("%d", tab[cont]);
        cont++;
    }
    return (0);
}
*/
