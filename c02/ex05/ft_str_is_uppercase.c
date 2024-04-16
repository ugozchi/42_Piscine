/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:28:31 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/18 10:34:31 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(str[i] > 64 && str[i] < 91))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "ceuvcuewv";
	str2 = "GUYDWde";
	str3 = "";
	str4 = "DEIBXE";
	printf("ft returns %i for str %s\n", ft_str_is_uppercase(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_uppercase(str2), str2);
	printf("ft returns %i for str %s\n", ft_str_is_uppercase(str3), str3);
	printf("ft returns %i for str %s\n", ft_str_is_uppercase(str4), str4);
}
*/
