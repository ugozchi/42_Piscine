/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:36:47 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/18 10:53:14 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
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

	str1 = "cvhdc\nxhs";
	str2 = "GUYDWUV";
	str3 = "";
	str4 = " $";
	printf("ft returns %i for str %s\n", ft_str_is_printable(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_printable(str2), str2);
	printf("ft returns %i for str %s\n", ft_str_is_printable(str3), str3);
	printf("ft returns %i for str %s\n", ft_str_is_printable(str4), str4);
}
*/
