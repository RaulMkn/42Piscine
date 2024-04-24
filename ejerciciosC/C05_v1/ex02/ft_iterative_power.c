/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:45:49 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/28 17:10:35 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	return (0);
}
/*
int main(void)
{
	int nb = 35245;
	int power = 0;
	int result = ft_iterative_power(nb, power);

	printf("%d", result);
	return 0;
}
*/