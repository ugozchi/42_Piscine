/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:10:43 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/25 11:02:12 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else
			i++;
	}
	return (0);
}

void	ft_string_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_string_tab(char **tab, int size)
{
	int	i;
	int	j;

	j = 1;
	while (j < size)
	{
		i = 0;
		while (i < size - j)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_string_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_string_tab(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
