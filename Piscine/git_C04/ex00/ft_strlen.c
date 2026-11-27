/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:57:09 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/01 18:08:13 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char *argv[])
{
	int	answer;

	if (argc == 1)
	{
		answer = ft_strlen(argv[1]);
		printf("%d", answer);
	}
	else
	{
		printf("Por favor ingresa 1 argumento.");
	}
	return (0);
}*/
