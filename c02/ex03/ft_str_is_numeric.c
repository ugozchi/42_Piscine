/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:17:04 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/18 09:42:42 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "0156156";
	str2 = "061100 Ibd";
	str3 = "";
	str4 = "062$&";
	printf("ft returns %i for str %s\n", ft_str_is_numeric(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_numeric(str2), str2);
	printf("ft returns %i for str %s\n", ft_str_is_numeric(str3), str3);
	printf("ft returns %i for str %s\n", ft_str_is_numeric(str4), str4);
}
*/
