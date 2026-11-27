/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:56:42 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/29 18:25:38 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	swap;

	start = 0;
	swap = size - 1;
	while (start < size - 1)
	{
		if (tab[start] > tab[start + 1])
		{
			swap = tab[start];
			tab[start] = tab[start + 1];
			tab[start + 1] = swap;
			start = 0;
		}
		else
			start++;
	}
}

/*int	main(void)
{
	int	array[5] = {4, 1, 5, 2, 3};

	ft_sort_int_tab(array, 5);
	printf("{%d, %d, %d, %d, %d}", array[0], array[1],
	array[2], array[3], array[4]);
	return (0);
}*/
