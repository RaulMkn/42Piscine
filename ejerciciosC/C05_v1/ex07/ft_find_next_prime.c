/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:36:37 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/29 16:19:21 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main() {
    // Casos para probar ft_is_prime
    printf("=== Pruebas para ft_is_prime ===\n");
    printf("%d es primo: %d\n", 2, ft_is_prime(2));
    printf("%d es primo: %d\n", 5, ft_is_prime(5));
    printf("%d es primo: %d\n", 11, ft_is_prime(11));
    printf("%d es primo: %d\n", 16, ft_is_prime(16));
    printf("%d es primo: %d\n", 0, ft_is_prime(0));
    printf("%d es primo: %d\n", 2, ft_is_prime(23));
    printf("%d es primo: %d\n", 5, ft_is_prime(57));
    printf("%d es primo: %d\n", 11, ft_is_prime(111));
    printf("%d es primo: %d\n", 16, ft_is_prime(167));
    printf("%d es primo: %d\n", 0, ft_is_prime(345676543));

    // Casos para probar ft_find_next_prime
    printf("\n=== Pruebas para ft_find_next_prime ===\n");
    printf("Siguiente primo después de %d: %d\n", 7, ft_find_next_prime(7));
    printf("Siguiente primo después de %d: %d\n", 12, ft_find_next_prime(12));
    printf("Siguiente primo después de %d: %d\n", 20, ft_find_next_prime(20));
    printf("Siguiente primo después de %d: %d\n", 0, ft_find_next_prime(0));

    return 0;
}
*/
