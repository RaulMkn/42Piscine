/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:44:11 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/22 13:52:31 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && i < n -1)
	{
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
