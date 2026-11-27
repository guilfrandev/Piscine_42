/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:31:31 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/06 12:42:52 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	resultado;

	i = 0;
	signo = 1;
	resultado = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado = (resultado * 10) + (str[i] - 48);
		i++;
	}
	return (resultado * signo);
}

/*int	main(int argc, char *argv[])
{
	int answer;

	if (argc > 1)
	{
		answer = ft_atoi(argv[1]);
		printf("%d\n", answer);
		return(0);
	}
	else
		printf("Ingresa 1 argumento");
}*/
