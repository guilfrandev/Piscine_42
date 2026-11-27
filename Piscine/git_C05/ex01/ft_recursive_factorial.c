/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 22:24:22 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/07 11:34:02 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
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

	i = ft_recursive_factorial(3);
	putnbr(i);
	return (0);
}*/
