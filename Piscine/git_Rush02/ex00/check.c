/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 10:57:05 by jmaestre          #+#    #+#             */
/*   Updated: 2026/07/05 12:36:40 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(char *nbr)
{	
	int	i;

	i = 0;
	while (nbr[i] != '\0')
	{
		if (nbr[i] < '0' || nbr[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_arguments(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
		return (1);
	else if (argc == 2)
		return (check_number(argv[1]));
	else if (argc == 3)
		return (check_number(argv[2]));
	return (0);
}
