/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:03:48 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/06 17:22:53 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_name(char *name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		write (1, &name[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc >= 1)
		ft_name(argv[0]);
	return (0);
}
