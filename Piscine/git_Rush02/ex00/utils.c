/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 12:07:31 by jmaestre          #+#    #+#             */
/*   Updated: 2026/07/04 12:08:32 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_error()
{
	write (1, "Error\n", 6);
}

void	write_str(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_isspace(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f')
			i++;
		else if (str[i] == '\n' || str[i] == '\r')
			i++;
		else if (str[i] == '\t' || str[i] == '\v')
			i++;
		else
			return (i);
	}
	return (i);
}

int	check_negative(char *str, int i)
{
	int	sign_neg;

	sign_neg = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign_neg++;
		i++;
	}
	if (sign_neg % 2 > 0)
		return (-1);
	return (1);
}

int	ft_atoll(char *str)
{
	int	i;
	int	neg;
	long long	total;

	total = 0;
	i = 0;
	i = check_isspace(str);
	neg = check_negative(str, i);
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	total *= neg;
	return (total);
}
