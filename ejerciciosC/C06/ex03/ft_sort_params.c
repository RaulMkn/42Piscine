/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:54:29 by rmakende          #+#    #+#             */
/*   Updated: 2024/02/28 16:36:30 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

char	**ft_sort_str_tab(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < argc)
	{
		i = 0;
		while (i < argc - j - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	**order;

	order = ft_sort_str_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_print_str(order[i]);
		i++;
	}
	return (0);
}
