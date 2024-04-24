/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:45:49 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/29 16:24:10 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;
	int	b;

	a = index -1;
	b = index -2;
	if (index < 0)
	{
		return (0);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(a) + ft_fibonacci(b));
	}
}
/*
int main()
{
	int indexToFind = 5;

	int result = ft_fibonacci(indexToFind);

	printf("Fibonacci(%d) = %d\n", indexToFind, result);

	return 0;
}
*/