/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_full_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:03:12 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 13:34:20 by mrochedy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	is_full_board(int **board)
{
	int	row;
	int	col;

	row = 0;
	while (row < g_size)
	{
		col = 0;
		while (col < g_size)
		{
			if (board[row][col] == 0)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
