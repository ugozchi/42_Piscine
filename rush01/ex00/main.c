/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochedy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:26:37 by mrochedy          #+#    #+#             */
/*   Updated: 2024/03/24 20:57:43 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"
#include "backtrack.h"
#include "is_error.h"
#include "get_entry_values.h"

int	g_size = 4;

void	free_tabs(int **board, int **entry_values)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if (board[i])
			free(board[i]);
		i++;
	}
	if (board)
		free(board);
	i = 0;
	while (i < g_size)
	{
		if (entry_values[i])
			free(entry_values[i]);
		i++;
	}
	if (entry_values)
		free(entry_values);
}

int	init_board(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_size)
	{
		board[i] = (int *)malloc(g_size * sizeof(int));
		if (board[i] == NULL)
			return (0);
		j = 0;
		while (j < g_size)
			board[i][j++] = 0;
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	**board;
	int	**entry_values;

	if (argc != 2 || is_error(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	board = (int **)malloc(g_size * sizeof(int *));
	if (board == NULL || !init_board(board))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	entry_values = get_entry_values(argv[1]);
	if (!backtrack(board, entry_values))
		write(1, "Error\n", 6);
	free_tabs(board, entry_values);
	return (0);
}
