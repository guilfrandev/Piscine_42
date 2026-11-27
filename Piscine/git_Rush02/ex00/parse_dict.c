/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:40:00 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/05 18:16:37 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct	s_dict
{
	char	*nbr;
	char	*txt;
}

// Extraemos el numero del buffer y avanzamos la posicion en el string

int	extract_nbr(char *str, int pos, struct s_dist *dist, int row)
{
	int	start;
	int	len;
	int	i;

	while(str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	start = pos;
	while (str[pos] >= '0' && str[pos] <= '9')
		pos++;
	len = pos - start;
	if (len == 0)
		return (-1);
	dict[rox].nbr = malloc(len + 1);
	if (!dict[row].nbr)
		return (-1);
	i = 0;
	while (i < len)
	{
		dict[row].nbr[i] = str[start + i];
		i++;
	}
	dict[row].nbr[i] = '\0';
	return (pos);
}

// Avanzamos espacios y los dos puntos

int skip_to_value(char *str, int pos)
{
    while(str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
        pos++;
	if (str[pos] != ':')
		return (-1);
	pos++;
    while(str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
        pos++;
	return (pos);
}

// Guardamos el texto en la estructura y devolvemos la posicion final de la línea

int	extract_txt(char *str, int pos, struct s_dist *dist, int row)
{
	int	start;
	int	end;
	int i;

	start = pos;
	while (str[pos] != '\n' && str[pos] != '\0')
		pos++;
	end = pos - 1
	while (end >= start && (str[end] == ' ' || (str[end] >= 9 && str[end] <= 13)))
		end--;
	dict[row].txt = malloc(end - start + 2);
	if (!dict[row].txt)
		return (-1);
	i = 0;
	while (start <= end)
		dict[row].txt[i++] = str[start++];
	dict.[row].txt[i] = '\0';
	if (str[pos] == '\n')
		pos++;
	return (pos);
}

// Recorre el buffer completo y rellena la matriz de estructuras linea por linea.

int	fill_dict(char *buf, struct s_dict *dict)
{
	int	i;
	int	row;

	i = 0;
	row = 0;
	while (buf[i] != '\0')
	{
		if(buf[i] == '\0' || buf[i] == ' ' || (buf[i] >= 9 && buf[i] <= 13))
			i++;
		else
		{
			i = extract_nbr(buf, i, dict, row);
			if (i == -1)
				return (0);
			i = skip_to_value(buf, 1);
			if (i == -1)
				return (0);
			i = extract_txt(buf, i, dict, row);
			if (i == -1)
				return (0);
			row++;
		}
	}
	dict[row].nbr = NULL;
	return (1);
}
