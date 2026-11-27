/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 12:01:08 by jmaestre          #+#    #+#             */
/*   Updated: 2026/07/05 12:36:24 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_error();
int		check_arguments(int argc, char **argv);
int		ft_atoll(char *str);

int	main(int argc, char **argv)
{
	int		number;
	char	*dict;

	if (check_arguments(argc, argv) == 1)
	{
		write_error();
		return (1);
	}
	dict = "numbers.dict";
	if (argc == 3)
	{
		dict = argv[1];
		number = ft_atoll(argv[2]);
	}
	else
		number = ft_atoll(argv[1]);
	// parse();
	if (number < 0)
	{
		write_error();
		return (1);
	}
	// transnumber();
	return (0);
}
