/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:50:58 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/29 21:54:17 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && !((str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z') || (str[i - 1] >= 'a'
					&& str[i - 1] <= 'z') || (str[i - 1] >= '0'
					&& str[i - 1] <= '9')))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*answer;
	char	str[] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";

	answer = ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
