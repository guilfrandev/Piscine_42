/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 08:42:01 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/01 09:43:44 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest[j + i] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[j + i] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (j + i);
}

/*int	main()
{
	char	dest[5] = "Hola";
	char	src[] = "Eres";
	unsigned int resultado;

	resultado = ft_strlcat(dest, src, 3);
	printf("%d", resultado);
}*/
