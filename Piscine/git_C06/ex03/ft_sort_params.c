/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:38:15 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/06 16:53:16 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcpm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort(char	**tab, int size)
{
	int		start;
	char	*swap;

	start = 1;
	while (start < size - 1)
	{
		if (ft_strcpm(tab[start], tab[start + 1]) > 0)
		{
			swap = tab[start];
			tab[start] = tab[start + 1];
			tab[start + 1] = swap;
			start = 1;
		}
		else
			start++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		ft_sort(argv, argc);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
