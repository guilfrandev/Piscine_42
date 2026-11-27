/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 15:37:20 by jmaestre          #+#    #+#             */
/*   Updated: 2026/07/04 21:33:17 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoll(char *str);
void	write_str(char *str);

struct Dict
{
	char	*nbr[50];
	char	*txt[50];
};

void	transnumber(struct Dict *dict, char *nbr)
{
	int					i;
	char				str[20];
	unsigned long long  n;

	printf ("nbr=%s\n", nbr);
	i = 0;
	while (i < 4)
	{
		if (*dict[i].nbr == nbr)
		{
			n = ft_atoll(nbr);
			printf ("n=%llu\n", n);
			// Deglosar número para obtener
			// unidades,. decenas, centenas, ...
			/*while (n > 0)
			{
				str[i] = (n % 10) + '0';
				i++;
				n = n / 10;
			}*/
			printf ("str=%s\n", str);
			if (n  >= 100)
				write (1, "one ", 4);
			write_str(*dict[i].txt);
		}
		i++;
	}
}

int	main(void)
{
	char		*nbr = "1537";
	struct Dict	*dict;
	int			rows;

	rows = 5;
	dict = (struct Dict *)malloc(rows * sizeof(struct Dict));
	if (dict == NULL)
	{
		write (1, "Error\n", 7);
		return (1);
	}
	*dict[0].nbr = "50";
	*dict[0].txt = "fifty";
	*dict[1].nbr = "10";
	*dict[1].txt = "ten";
	*dict[2].nbr = "1000";
	*dict[2].txt = "thousand";
	*dict[3].nbr = "1000000000000";
	*dict[3].txt = "trillion";
	*dict[4].nbr = "1000000000000000000000";
	*dict[4].txt = "sextillion";
	*dict[5].nbr = "1000000000000000000000000000000";
	*dict[5].txt = "nonillion";
	*dict[6].nbr = "1000000000000000000000000000000000000";
	*dict[6].txt = "undecillion";
	*dict[7].nbr = "1";
	*dict[7].nbr = "one";
	*dict[8].nbr = "2";
	*dict[8].nbr = "two";
	*dict[9].nbr = "3";
	*dict[9].nbr = "three";
	*dict[10].nbr = "4";
	*dict[10].nbr = "four";
	*dict[11].nbr = "5";
	*dict[11].nbr = "five";
	*dict[12].nbr = "6";
	*dict[12].nbr = "six";
	*dict[13].nbr = "7";
	*dict[13].nbr = "7";
	*dict[14].nbr = "8";
	*dict[14].nbr = "eight";
	*dict[15].nbr = "9";
	*dict[15].nbr = "nine";
	*dict[16].nbr = "0";
	*dict[16].nbr = "zero";
	transnumber(dict, nbr);
    free(dict);
	dict = NULL;
	return (0);
}
