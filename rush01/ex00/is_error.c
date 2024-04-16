/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:12:15 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 14:14:21 by mrochedy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	is_not_correct_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 31)
		return (1);
	return (0);
}

int	is_not_correct_numbers(char *str)
{
	int	i;

	i = 0;
	while (i <= 31)
	{
		if (str[i] >= '1' && str[i] <= g_size + '0')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				return (1);
			else
				i += 2;
		}
		else
			return (1);
	}
	return (0);
}

int	is_error(char *str)
{
	if (is_not_correct_length(str) || is_not_correct_numbers(str))
		return (1);
	else
		return (0);
}
