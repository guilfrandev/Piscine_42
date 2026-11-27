/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:04:07 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/09 13:57:27 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb && nb >= 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
    printf("El numero 2 es primo (1)-> %d\n", ft_is_prime(2));
    printf("El numero 3 es primo (1)-> %d\n", ft_is_prime(3));
    printf("El numero 4 no es primo (0)-> %d\n", ft_is_prime(4));
    printf("El numero 5 es primo (1)-> %d\n", ft_is_prime(5));
    printf("El numero 6 no es primo (0)-> %d\n", ft_is_prime(6));
	printf("El numero 7 es primo (1)-> %d\n", ft_is_prime(7));
	return (0);
}*/
