/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:11:03 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/29 16:24:24 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	raiz;

	if (nb <= 0)
	{
		return (0);
	}
	raiz = 1;
	while (raiz * raiz <= nb)
	{
		if (raiz * raiz == nb)
		{
			return (raiz);
		}
		else if (raiz > 46340)
		{
			return (0);
		}
		else
			raiz++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	// Prueba con algunos valores
	int numeros[] = {2147483642, 25, 9, 36, 7, 0, -1};

	size_t i; // Cambiado a size_t para ser compatible con sizeof
	for (i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++)
	{
		int resultado = ft_sqrt(numeros[i]);
		if (resultado != 0)
		{
			printf("La raíz cuadrada de %d es: %d\n", numeros[i], resultado);
		}
		else
		{
			printf("%d no tiene una raíz cuadrada entera.\n", numeros[i]);
		}
	}

	return 0;
}
*/