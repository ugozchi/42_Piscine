/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:44:27 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/25 17:58:16 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		result = nb;
		while (nb-- > 1)
			result = result * nb;
		return (result);
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%d\n", ft_iterative_factorial(9));
}
*/
