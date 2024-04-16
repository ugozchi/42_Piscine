/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:15:06 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 19:53:46 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"
#include "backtrack.h"
#include "is_valid_cell.h"
#include "is_full_board.h"
#include "is_valid_board.h"
#include "print_board.h"

int	set_current_cell(int val, int **board, int **entry_values, int *coord)
{
	while (val <= g_size)
	{
		board[coord[0]][coord[1]] = val;
		if (is_valid_cell(board, coord[0], coord[1]))
			if (backtrack(board, entry_values))
				return (1);
		board[coord[0]][coord[1]] = 0;
		val++;
	}
	return (0);
}

/*
	coord[0] = row;
	coord[1] = col;
*/

int	backtrack(int **board, int **entry_values)
{
	int	coord[2];
	int	current_val;

	coord[0] = 0;
	if (is_full_board(board) && is_valid_board(board, entry_values))
		return (print_board(board));
	while (coord[0] < g_size)
	{
		coord[1] = 0;
		while (coord[1] < g_size)
		{
			if (board[coord[0]][coord[1]] == 0)
			{
				current_val = 1;
				if (set_current_cell(current_val, board, entry_values, coord))
					return (1);
				return (0);
			}
			coord[1]++;
		}
		coord[0]++;
	}
	return (0);
}
