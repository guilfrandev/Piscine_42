/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:09:54 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/29 17:56:19 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	array[5] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(array, 5);
	printf("{%d, %d, %d, %d, %d}", array[0], array[1], 
	array[2], array[3], array[4]);
	return (0);
}
*/
