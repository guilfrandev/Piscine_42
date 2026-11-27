/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:28:08 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/06 17:25:14 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	total;

	i = 0;
	total = argc - 1;
	if (argc > 1)
	{
		while (total > 0)
		{
			while (argv[total][i] != '\0')
				i++;
			write (1, argv[total], i);
			write (1, "\n", 1);
			total--;
			i = 0;
		}
	}
	return (0);
}
