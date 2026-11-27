/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 10:43:50 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/05 19:33:01 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		string[50];
	int		i;
	long	n;

	n = nb;
	i = 0;
	if (n == 0)
		write (1, "0", 1);
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		string[i++] = n % 10;
		n = n / 10;
	}
	while (--i >= 0)
	{
		string[i] = string[i] + 48;
		write(1, &string[i], 1);
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	return(0);
}*/
