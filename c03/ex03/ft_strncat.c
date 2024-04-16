/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:59:03 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/19 15:34:50 by uzanchi          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	longueur;

	i = 0;
	longueur = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
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

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[100] = "After this should come";
	char	test[100] = "After this should come";
	char	*s2;

	s2 = " some of that bigger string";
	printf("s1 is '%s'\n", s1);
	printf("s2 is '%s'\n", s2);
	ft_strncat(s1, s2, 6);
	printf("%s\n", s1);
	printf("Comparison with strcat :\n");
	strncat(test, s2, 6);
	printf("%s\n", test);
	printf("Are the results identical? %i ", strcmp(test, s1));
}
*/
