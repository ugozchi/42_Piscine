/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:10:25 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/13 13:10:30 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		mod = nb % 10;
		nb_divided = nb / 10;
		ft_putnbr(nb_divided);
	}
	if (nb > 9)
		ft_putchar(mod + '0');
	else
		ft_putchar(nb + '0');
}
/*
int	 main(void)
{
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(7483648);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-7);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
}
*/
