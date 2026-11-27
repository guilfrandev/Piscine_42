/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilfran <guilfran@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:39:33 by guilfran          #+#    #+#             */
/*   Updated: 2026/07/05 16:39:38 by guilfran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

struct s_dict
{
	char	*nbr;
	char	*txt;
};

// Libera el array si hay un "Dict Error"

void    free_dict(struct s_dict *dict, int rows, char *buffer)
{
    int i;

    i = 0;
    while (i < rows)
    {
        free(dict[i].nbr);
        free(dict[i].txt);
        i++;
    }
    free(dict);
    free(buffer);
}

// En la 1º función veremos cuantos caracteres tiene
// el diccionario que estemos usando, ya que lo necesitamos
// por ejemplo para el malloc.

int	get_file_size(char *filename)
{
	int		id;
	int		total;
	char	c;

	id = open(filename, O_RDONLY);
	if (id < 0)
		return (-1);
	total = 0;
	while (read(id, &c, 1) > 0)
		total++;
	close(id);
	return (total);
}

// En la 2º funcion copiaremos y pegaremos el contenido
// del diccionario en un string para poder acceder sin problema
// a cualquier caracter sin tener que usar open, read, close.

char	*read_file_to_buffer(char *filename, int size)
{
	int		id;
	char	*buffer;

	buffer = malloc(size + 1);
	if (!buffer)
		return (NULL);
	id = open(filename, O_RDONLY);
	if (id < 0)
	{
		free(buffer);
		return (NULL);
	}
	read(id, buffer, size);
	buffer[size] = '\0';
	close(id);
	return (buffer);
}

// En la 3º funcion intentaremos sacar la cantidad de lineas
// Que tiene nuestro diccionario para poder saber el tamaño
// de la matriz que vamos a crear

int	count_lines(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] >= '0' && buffer[i] <= '9')
		{
			count++;
			while(buffer[i] != '\n' && buffer[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
} 
