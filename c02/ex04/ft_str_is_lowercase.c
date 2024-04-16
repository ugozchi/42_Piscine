/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:44:45 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/18 10:27:10 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
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
	str2 = "GUYDWUV";
	str3 = "";
	str4 = " $";
	printf("ft returns %i for str %s\n", ft_str_is_lowercase(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_lowercase(str2), str2);
	printf("ft returns %i for str %s\n", ft_str_is_lowercase(str3), str3);
	printf("ft returns %i for str %s\n", ft_str_is_lowercase(str4), str4);
}
*/
