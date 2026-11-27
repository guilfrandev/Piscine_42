/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:08:30 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/02 11:30:50 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		write (1, "Ingresa 1 elemento", 18);
	}
}*/
