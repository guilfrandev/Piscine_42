/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:32:20 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/09 13:56:56 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		j = i * i;
		if (j == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	printf("La raiz es -> %d\n", ft_sqrt(-4));
	return (0);
}*/
