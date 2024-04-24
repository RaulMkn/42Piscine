/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:21:02 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/26 13:04:23 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	char	*temp;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			temp = str;
			j = 0;
			while (to_find[j] != '\0')
			{
				if (*str != to_find[j])
					break ;
				str++;
				j++;
			}
			if (to_find[j] == '\0')
				return (temp);
		}
		str++;
	}
	return (NULL);
}
