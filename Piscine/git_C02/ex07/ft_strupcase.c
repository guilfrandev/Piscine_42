/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:36:55 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/25 20:34:41 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		countdown;
	char	*dest;

	dest = str;
	countdown = 0;
	while (str[countdown] != '\0')
	{
		if (str[countdown] >= 'a' && str[countdown] <= 'z')
		{
			dest[countdown] = str[countdown] - 32;
		}
		countdown++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*answer;
	char	*text;

	text[] = "lAla";
	answer = ft_strupcase(text);
	write (1, answer, 4);
	return (0);
}*/
