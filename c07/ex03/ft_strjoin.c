/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:33:49 by uzanchi           #+#    #+#             */
/*   Updated: 2024/04/02 12:27:02 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

int	ft_strsize(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(*(strs + i++));
	}
	len += (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_cat(int size, char **strs, char *sep, char *result)
{
	int		i;
	int		x;
	int		j;
	char	*head;

	i = 0;
	x = 0;
	head = sep;
	while (i < size)
	{
		j = 0;
		while (*(*(strs + i) + j))
			*(result + x++) = *(*(strs + i) + j++);
		while (*head && i < size - 1)
			*(result + x++) = *head++;
		head = sep;
		i++;
	}
	*(result + x) = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		size_to_allocate;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (!result)
			return (0);
		result[0] = '\0';
		return (result);
	}
	else
	{
		size_to_allocate = ft_strsize(size, strs, sep);
		result = (char *)malloc(sizeof(char) * (size_to_allocate + 1));
		if (!result)
			return (0);
		result = ft_cat(size, strs, sep, result);
		return (result);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hello", "World"};
	int size = 2;
	char *sep = " ";

	char *result = ft_strjoin(size, strs, sep);

	if (result)
	{
		printf("%s", result);
		free(result);
	}
	return (0);
}
*/

#include <stdio.h>
/*
char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
*/
