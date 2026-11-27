/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 20:26:27 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/26 10:33:46 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	position;

	position = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if (str[position] >= 48 && str[position] <= 57)
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
	int	ascii;

	answer2 = ft_str_is_numeric("123");
	ascii = answer2 + 48
	write(1, &ascii, 1);
	return (0);
}*/
