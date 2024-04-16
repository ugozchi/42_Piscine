/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:46:29 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/30 14:42:01 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_str_pos(char *c, char *str, int length)
{
	int	i;

	i = 0;
	while (*c != str[i])
	{
		i++;
		if (i > length)
			return (-1);
	}
	return (i);
}

long	base_to_long(char *str, char *base)
{
	int		i;
	long	result;
	int		sign;
	int		base_length;

	i = 0;
	result = 0;
	sign = 1;
	base_length = ft_strlen(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_str_pos(&str[i], base, base_length) != -1 && str[i] != '\0')
	{
		result = result * base_length + ft_str_pos(&str[i], base, base_length);
		i++;
	}
	return (result * sign);
}

void	long_to_base(long nbr, char *base, char *str, int index)
{
	int	base_length;

	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		str[index] = '-';
		index++;
		nbr = nbr * -1;
	}
	if (nbr < base_length)
	{
		str[index] = base[nbr];
		str[index + 1] = '\0';
	}
	else
	{
		long_to_base(nbr / base_length, base, str, index);
		long_to_base(nbr % base_length, base, str, ft_strlen(str));
	}
}
