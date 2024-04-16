/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:13:53 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/19 14:54:54 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	longueur;

	i = 0;
	longueur = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[longueur + i] = src[i];
		i++;
	}
	dest[longueur + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char	s1[100] = "After this should come";
	char	test[100] = "After this should come";
	char	*s2;

	s2 = " that";
	printf("s1 is '%s'\n", s1);
	printf("s2 is '%s'\n", s2);
	ft_strcat(s1, s2);
	strcat(test, s2);
	printf("%s\n", s1);
	printf("%s\n", test);
}
*/
