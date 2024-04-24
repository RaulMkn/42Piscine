/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:08:25 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/26 17:02:35 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\v')
			i++;
		else if (str[i] == '\n' || str[i] == '\f')
			i++;
		else if (str[i] == '\t' || str[i] == '\r')
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	mult;

	i = check_spaces(str);
	sum = 0;
	mult = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			mult *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * mult);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "   123"; 
	char str2[] = "   		--456";
	char str3[] = "   +-+-+-+-+-789";
	char str4[] = "   123abc";

	printf("Resultado 1: %d\n", ft_atoi(str1));
	printf("Resultado 2: %d\n", ft_atoi(str2));
	printf("Resultado 3: %d\n", ft_atoi(str3));
	printf("Resultado 4: %d\n", ft_atoi(str4));

	return 0;
}
*/