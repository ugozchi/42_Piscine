/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:15:13 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/27 15:18:30 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(19));
	printf("%d\n", ft_find_next_prime(88));
	printf("%d\n", ft_find_next_prime(89));
	printf("%d\n", ft_find_next_prime(2147483646));
}
*/
