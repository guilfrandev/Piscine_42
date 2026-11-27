/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:29:15 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/18 19:30:01 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letra;

	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		--letra;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}*/
