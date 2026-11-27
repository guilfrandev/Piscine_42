/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-leo <erde-leo@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:39:05 by erde-leo          #+#    #+#             */
/*   Updated: 2026/06/28 14:39:14 by erde-leo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Aquí tenemos que coger el string del enunciado, comprobar que sea correcto y transformar los caracteres válidos en números de verdad (int).Aquí se usa malloc (para guardar los números del enunciado en la memoria en algún sitio hasta que decidamos liberarla con free)(librería añadida)
 void* malloc(size_tsize)

 Si el malloc falla o los argumentos están mal: NULL.

 La función recibe un string y tiene que rellenar el array. Necesitamos dos contadores (i y j).
 i para movernos por el string del usuario (caracter a caracter)
 j para movernos por nuestro array de 16 posiciones (número a número)
 */

int *parser(char *str)/*Devolver un puntero a un int; string que el usuario escribe argv[1]*/
{
	int *array;
	int i;
	int j;

	array = malloc(sizeof(int) *16); /*reservamos así 16 enteros*/
	if (array == NULL) /*si se queda sin memoria que devuelva un NULL*/
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0') /*Bucle caracter por caracter*/
	{
		if ()
			i++;
		if ()
			j++;
		else
		{
			free (array);
			return (NULL); /*si no se cumplen las condiciones de arriba, devuelva un NULL*/
		}
	}
	if(j != 16) /*en caso de que no sean 16 números devolvería NULL también*/
	{
		free (array);
		return (NULL);
	}
	return(array);
}
