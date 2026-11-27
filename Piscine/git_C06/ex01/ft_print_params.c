/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:03:58 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/06 17:23:40 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		total;
	int		i;

	i = 0;
	total = 1;
	if (argc > 1)
	{
		while (total < argc)
		{
			while (argv[total][i] != '\0')
				i++;
			write (1, argv[total], i);
			write (1, "\n", 1);
			total++;
			i = 0;
		}
	}
	return (0);
}
