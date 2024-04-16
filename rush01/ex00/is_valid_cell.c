/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_cell.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:58:13 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 13:37:14 by mrochedy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	is_valid_col(int **board, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_size - 1)
	{
		j = i + 1;
		while (j < g_size)
		{
			if (board[i][col] == board[j][col] && board[i][col] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_row(int **board, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_size - 1)
	{
		j = i + 1;
		while (j < g_size)
		{
			if (board[row][i] == board[row][j] && board[row][i] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_cell(int **board, int row, int col)
{
	if (is_valid_col(board, col) && is_valid_row(board, row))
	{
		return (1);
	}
	return (0);
}
