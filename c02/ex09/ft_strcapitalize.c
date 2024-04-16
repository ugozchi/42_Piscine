/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:37:00 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/18 16:16:29 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_isspace(char c)
{
	if (!(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z')
		&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		space;

	space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			space = 1;
		}
		else
		{
			if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			space = 0;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
*/
