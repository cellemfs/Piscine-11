/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaula-d <ppaula-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:20:56 by ppaula-d          #+#    #+#             */
/*   Updated: 2024/09/08 16:55:50 by ppaula-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	error(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "Error: Arguments must value more than 0.\n", 42);
	}
	ft_putchar('\n');
}

void	printcharacters(int x, char beginning, char middle, char end)
{
	int	columncounter;

	columncounter = 1;
	while (columncounter <= x)
	{
		if (columncounter == 1)
		{
			ft_putchar(beginning);
		}
		else if (columncounter == x)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		columncounter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	linecounter;

	error(x, y);
	if (x >= 1 && y >= 1)
	{
		linecounter = 1;
		while (linecounter <= y)
		{
			if (linecounter == 1)
			{
				printcharacters(x, 'A', 'B', 'C');
			}
			else if (linecounter == y)
			{
				printcharacters(x, 'C', 'B', 'A');
			}
			else
			{
				printcharacters(x, 'B', ' ', 'B');
			}
			linecounter++;
		}
	}
}
