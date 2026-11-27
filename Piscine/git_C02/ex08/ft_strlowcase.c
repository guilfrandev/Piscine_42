/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:11:01 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/25 20:36:11 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		countdown;
	char	*dest;

	dest = str;
	countdown = 0;
	while (str[countdown] != '\0')
	{
		if (str[countdown] >= 'A' && str[countdown] <= 'Z')
		{
			dest[countdown] = str[countdown] + 32;
		}
		countdown++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*answer;
	char	text[] = "HOlA";

	answer = ft_strlowcase(text);
	write (1, answer, 4);
}*/
