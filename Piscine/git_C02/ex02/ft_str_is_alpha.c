/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:27:06 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/26 10:33:59 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	position;

	position = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if ((str[position] >= 97 && str[position] <= 122)
			|| (str[position] >= 65 && str[position] <= 90))
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

	answer2 = ft_str_is_alpha("/Hola");
	ascii = answer2 + 48;
	write(1, &ascii, 1);
}*/
