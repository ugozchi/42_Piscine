/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:12:32 by uzanchi           #+#    #+#             */
/*   Updated: 2024/03/29 09:01:13 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}

void	print_solutions(int *solution, int taille)
{
	char	c;
	int		i;

	i = 0;
	while (i < taille)
	{
		c = solution[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	good_position(int *solution, int colonne, int ligne)
{
	int	i;

	i = 0;
	while (i < colonne)
	{
		if (solution[i] == ligne || abs(solution[i] - ligne) == colonne - i)
			return (0);
		i++;
	}
	return (1);
}

void	backtrack(int *solution, int colonne, int taille, int *compteur)
{
	int	ligne;

	ligne = 0;
	if (colonne == taille)
	{
		print_solutions(solution, taille);
		(*compteur)++;
	}
	else
	{
		while (ligne < taille)
		{
			if (good_position(solution, colonne, ligne))
			{
				solution[colonne] = ligne;
				backtrack(solution, colonne + 1, taille, compteur);
			}
			ligne++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	compteur;
	int	solution[10];

	solution[0] = -1;
	solution[1] = -1;
	solution[2] = -1;
	solution[3] = -1;
	solution[4] = -1;
	solution[5] = -1;
	solution[6] = -1;
	solution[7] = -1;
	solution[8] = -1;
	solution[9] = -1;
	compteur = 0;
	backtrack(solution, 0, 10, &compteur);
	return (compteur);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return 0; 
}
*/
