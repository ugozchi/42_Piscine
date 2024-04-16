/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:53:21 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/26 10:34:07 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		result = nb;
		while (power-- > 1)
			result = result * nb;
		return (result);
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%d\n", ft_iterative_power(*argv[1] - '0', *argv[2] - '0'));
}
*/	
