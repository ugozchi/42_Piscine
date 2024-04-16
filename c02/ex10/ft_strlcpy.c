/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:17:57 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/18 18:35:36 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "This is a test";
	char	dest[] = "                   ";

	printf("The string '%s' is %i characters long \n", src, ft_strlen(src));
	printf("Source string is '%s'\n", src);
	printf("ft returns %i\n", ft_strlcpy(dest, src, 10));
	printf("src after ft is '%s'\n", src);
	printf("dest after ft is '%s'", dest);
}
*/
