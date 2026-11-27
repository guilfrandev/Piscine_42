/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 16:26:25 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/07 16:29:48 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
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

	i = ft_iterative_power(2, 3);
	putnbr(i);
	return (0);
}*/
