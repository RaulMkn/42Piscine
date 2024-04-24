/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:41:51 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/29 18:09:34 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dest[l] != '\0' && l < size)
		l++;
	j = l;
	while (src[i] != '\0')
		i++;
	if (size == 0 || l >= size)
		return (l + i);
	while (j < (size - 1) && src[k])
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j + k] = '\0';
	return (l + i);
}
