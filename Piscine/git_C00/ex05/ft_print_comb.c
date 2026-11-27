/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 12:08:21 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/21 13:32:53 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digito[3];

	digito[0] = '0';
	while (digito[0] <= '7')
	{
		digito[1] = digito[0] + 1;
		while (digito[1] <= '8')
		{
			digito[2] = digito[1] + 1;
			while (digito[2] <= '9')
			{
				write(1, &digito[0], 1);
				write(1, &digito[1], 1);
				write(1, &digito[2], 1);
				if (digito[0] != '7' || digito[1] != '8' || digito[2] != '9')
				{
					write(1, ", ", 2);
				}
				digito[2]++;
			}
			digito[1]++;
		}
		digito[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
