/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:43:37 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/20 17:07:24 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*first;
	int		cap;

	cap = 1;
	first = str;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')
			|| (*str >= '0' && *str <= '9'))
		{
			if ((cap == 1) && *str >= 'a' && *str <= 'z')
				*str -= 32;
			if ((cap == 0) && *str >= 'A' && *str <= 'Z')
				*str += 32;
			cap = 0;
		}
		else
			cap = 1;
		str++;
	}
	return (first);
}
