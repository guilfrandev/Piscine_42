/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 13:20:09 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/06 11:59:56 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comun(int nbr, char *base)
{
	int		string[20];
	int		i;
	long	n;

	n = nbr;
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
		string[i++] = base[n % 10];
		n = n / 10;
	}
	while (--i >= 0)
	{
		write (1, &string[i], 1);
	}
}

void	ft_binaria(int nbr, char *base)
{
	int		string[20];
	int		i;
	long	n;

	n = nbr;
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
		string[i++] = base[n % 2];
		n = n / 2;
	}
	while (--i >= 0)
	{
		write (1, &string[i], 1);
	}
}

void	ft_hexadecimal(int nbr, char *base)
{
	int		longitud;
	int		i;
	char	*hex;
	char	resultado[9];

	i = 8;
	hex = "0123456789abcdef";
	if (nbr == 0)
	{
		write (1, "0", 1);
		return ;
	}
	while (nbr > 0)
	{
		i--;
		resultado[i] = base[nbr % 16];
		nbr = nbr / 16;
	}
	longitud = 8 - i;
	write (1, &resultado[i], longitud);
}

void	ft_octal(int nbr, char *base)
{
	int		longitud;
	int		i;
	char	*oct;
	char	resultado[8];

	i = 7;
	oct = "01234567";
	if (nbr == 0)
	{
		write (1, "0", 1);
		return ;
	}
	while (nbr > 0)
	{
		i--;
		resultado[i] = base[nbr % 8];
		nbr = nbr / 8;
	}
	longitud = 7 - i;
	write (1, &resultado[i], longitud);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (i == 10)
	{
		ft_comun(nbr, base);
	}
	else if (i == 2)
	{
		ft_binaria(nbr, base);
	}
	else if (i == 16)
	{
		ft_hexadecimal(nbr, base);
	}
	else if (i == 8)
	{
		ft_octal(nbr, base);
	}
	i = 0;
}
