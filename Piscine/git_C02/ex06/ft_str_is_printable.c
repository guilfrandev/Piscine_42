/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:26:39 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/26 10:32:18 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	position;

	position = 0;
	if (str[position] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if (str[position] >= 32 && str[position] <= 126)
		{
			position++;
		}
		else
		{
			return (0);
			break ;
		}
	}
	return (1);
}

/*int	main(void)
{
	int	answer2;
	int ascii;

	answer2 = ft_str_is_printable("\n");
	ascii = answer2 + 48;
	write (1, &answer2, 1);
	return (0);
}*/
