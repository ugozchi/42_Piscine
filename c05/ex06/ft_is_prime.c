/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:21:34 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/27 15:09:35 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(19));	
	printf("%d\n", ft_is_prime(88));
	printf("%d\n", ft_is_prime(89));
	printf("%d\n", ft_is_prime(73));
	printf("%d\n", ft_is_prime(2147483648));
	printf("%d\n", ft_is_prime(2147483646));
}
*/
