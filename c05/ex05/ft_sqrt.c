/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:07:58 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/27 18:16:18 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_sqrt(63));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(24));	
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(2147));
}
*/
