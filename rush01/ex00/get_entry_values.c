/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_entry_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:24:21 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 17:58:46 by mrochedy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

char	*remove_spaces(char *str)
{
	int		i;
	int		j;
	char	*str_no_space;

	i = 0;
	j = 0;
	str_no_space = malloc((g_size * g_size + 1) * sizeof(char));
	while (str[j])
	{
		if (str[j] != ' ')
		{
			str_no_space[i] = str[j];
			i++;
		}
		j++;
	}
	str_no_space[i] = '\0';
	return (str_no_space);
}

int	**get_entry_values(char *str)
{
	int		i;
	int		j;
	int		k;
	int		**entry_values;
	char	*str_no_space;

	i = 0;
	entry_values = malloc(g_size * sizeof(*entry_values));
	while (i < g_size)
		entry_values[i++] = malloc(g_size * sizeof(int));
	str_no_space = remove_spaces(str);
	i = 0;
	j = 0;
	while (str_no_space[i] && j < g_size)
	{
		k = 0;
		while (k < g_size)
		{
			entry_values[j][k] = str_no_space[i] - '0';
			i++;
			k++;
		}
		j++;
	}
	return (entry_values);
}
