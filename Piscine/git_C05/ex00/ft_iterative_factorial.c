/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:06:34 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/09 12:32:24 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = 1;
	total = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i <= nb)
		{
			total *= i;
			i++;
		}
	}
	else
		return (0);
	return (total);
}

/*void	putnbr(int nb)
{
	int		str[50];
	int		i;
	long	n;

	i = 0;
	n = nb;
	if (n == 0)
		write (1, "0", 1);
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = n % 10;
		n = n / 10;
	}
	while (--i >= 0)
	{
		str[i] = str[i] + 48;
		write (1, &str[i], 1);
	}
}

int	main(void)
{
	int i;

	i = ft_iterative_factorial(3);
	putnbr(i);
	return (0);
}*/
