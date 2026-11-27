/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-leo <erde-leo@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 14:39:32 by erde-leo          #+#    #+#             */
/*   Updated: 2026/06/28 15:04:51 by erde-leo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void display(char c)
{
	while ()
	{
		write(1, &c, 1); /*imprimir el caracter*/
		
		write(1, " ", 1); /*si no es el último número de la fila, escriba un espacio*/
	}
	write(1, "\n", 1); /*porque en algún momento deberá hacer un salto de línea*/

	write(1, "Error\n", 6); /*porque si no cumple cierta condición aparezca "Error"*/
}
