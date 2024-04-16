/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:08:49 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 13:34:51 by mrochedy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

void	check_for_count_increase(int *count, int pos_value, int *current_value)
{
	if (pos_value > *current_value)
	{
		*current_value = pos_value;
		*count = *count + 1;
	}
}

int	check_row(int row, int *expected_counts, int **board)
{
	int	counts[2];
	int	current_value;
	int	col;

	col = 0;
	current_value = 0;
	counts[0] = 0;
	counts[1] = 0;
	while (col < g_size)
	{
		check_for_count_increase(&counts[0], board[row][col], &current_value);
		col++;
	}
	current_value = 0;
	col = g_size - 1;
	while (col >= 0)
	{
		check_for_count_increase(&counts[1], board[row][col], &current_value);
		col--;
	}
	if (counts[0] != expected_counts[0] || counts[1] != expected_counts[1])
		return (0);
	return (1);
}

int	check_col(int col, int *expected_counts, int **board)
{
	int	counts[2];
	int	current_value;
	int	row;

	row = 0;
	current_value = 0;
	counts[0] = 0;
	counts[1] = 0;
	while (row < g_size)
	{
		check_for_count_increase(&counts[0], board[row][col], &current_value);
		row++;
	}
	current_value = 0;
	row = g_size - 1;
	while (row >= 0)
	{
		check_for_count_increase(&counts[1], board[row][col], &current_value);
		row--;
	}
	if (counts[0] != expected_counts[0] || counts[1] != expected_counts[1])
		return (0);
	return (1);
}

int	is_valid_board(int **board, int **entry_values)
{
	int	row_col;
	int	expected_counts[2];
	int	is_valid;

	row_col = 0;
	while (row_col < g_size)
	{
		expected_counts[0] = entry_values[2][row_col];
		expected_counts[1] = entry_values[3][row_col];
		is_valid = check_row(row_col, expected_counts, board);
		if (!is_valid)
			return (0);
		row_col++;
	}
	row_col = 0;
	while (row_col < g_size)
	{
		expected_counts[0] = entry_values[0][row_col];
		expected_counts[1] = entry_values[1][row_col];
		is_valid = check_col(row_col, expected_counts, board);
		if (!is_valid)
			return (0);
		row_col++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int tab1[4] = {2, 4, 1, 3};
	int tab2[4] = {1, 3, 2, 4};
	int tab3[4] = {4, 1, 3, 2};
	int tab4[4] = {3, 2, 4, 1};
	int col_up[4] = {2, 1, 4, 2};
	int col_down[4] = {2, 3, 1, 3};
	int row_left[4] = {2, 3, 1, 2};
	int row_right[4] = {2, 1, 3, 2};
	int *board[4] = {tab1, tab2, tab3, tab4};
	int *entry_values[4] = {col_up, col_down, row_left, row_right};
	int res;
	
	res = is_valid_board(board, entry_values);
	printf("%d\n", res);
}
*/
