/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 16:05:21 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/21 16:10:01 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y, int i, int j)
{
	j = -1;
	while (++j < y && x > 0)
	{
		i = -1;
		while (++i < x)
		{
			if ((j == 0 && i == 0)
				|| (j == y - 1 && i == x - 1 && x > 1 && y > 1))
			{
				ft_putchar('/');
			}
			else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
			{
				ft_putchar('\\');
			}
			else if ((j == 0 || j == y - 1 || i == 0 || i == x - 1))
			{
				ft_putchar('*');
			}
			else
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}
