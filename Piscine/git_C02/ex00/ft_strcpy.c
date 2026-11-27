/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:15:34 by guilfran          #+#    #+#             */
/*   Updated: 2026/06/23 15:59:06 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	contador;

	contador = 0;
	while (src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*origen;
	char	destino[20];

	origen = "Hola";
	ft_strcpy(destino, origen);
	write (1, destino, 4);
	return (0);
}*/
