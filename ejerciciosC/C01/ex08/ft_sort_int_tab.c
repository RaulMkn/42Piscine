/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:23:26 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/29 17:26:40 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main() {
    // Ejemplo de un arreglo de enteros desordenado
    int arreglo[] = {5, 2, 8, 1, 3};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);

    // Mostrar el arreglo desordenado
    printf("Arreglo desordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    // Llamar a la función para ordenar el arreglo
    ft_sort_int_tab(arreglo, size);

    // Mostrar el arreglo ordenado
    printf("Arreglo ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
