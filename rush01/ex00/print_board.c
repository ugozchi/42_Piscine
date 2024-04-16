/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:55:47 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 13:54:38 by mrochedy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	print_board(int **board)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < g_size)
	{
		col = 0;
		while (col < g_size)
		{
			c = board[row][col] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	return (1);
}
