/*- En cada fila y columna solo puede haber un edificio de cada tamaño (1,2,3,4) como un sudoku

- Las pistas de fuera dicen cómo se debería ver desde cierta posición. Si ves un 4 la fila y columna siempre será 1234 y si ves un 1 el primer edificio siempre será 4.

Backtracking: técnica para resolver problemas construyendo soluciones paso a paso. Excelente para problemas combinatorios donde se deben evaluar múltiples posibilidades (como la resolución de un Sudoku).
¿Cómo funciona?
1. Exploración incremental: el algoritmo toma una decisión y avanza al siguiente nivel del árbol de decisiones. 
2. Evaluación de restricciones: En cada paso, comprueba si la combinación actual sigue siendo válida.
3. Vuelta atrás: Si la rama actual incumple las reglas o no es viable, el algoritmo la descarta, retrocede y explora otra rama.

Necesitaremos: 
- Funciones de validación: que verifiquen las filas y las columnas
- Función main: coordinar el flujo (parsea llama al solver e inicia el programa)
- Función principal que intente llenar las casillas (Backtracking)
- Controlar los errores de entrada (función de parsing que recibe los argumentos y los comprueba)
- Función que imprima el resultado (write)
- Función de visibilidad (que comprueba que se ven los bloques que piden las pistas desde fuera)
- Matriz 4x4 (inicializada a 0) para representar el tablero

Es un array bidimensionado (array de arrays)
Si no se cumplen las reglas del juego: error + salto de línea
Si se cumplen las reglas del juego: imprime

---------col1top   col2top    col3top     col4top--
row1left                                           row1right
row2left                                           row2right
row3left                                           row3right
row4left                                           row4right
------col1bottom col2bottom col3bottom col4bottom

ARCHIVOS

main.c : La función main. Recibe argc y argv, inicializa el tablero 4x4 a ceros y coordina las llamadas al resto de archivos.

parser.c :La función que revisa que los argumentos de la línea de comandos sean válidos (16 números entre 1 y 4 separados por espacios) y los guarda en un array para las pistas.

display.c : Las funciones de salida de texto. La que imprime la solución final (la matriz 4x4 con espacios) y la que imprime "Error\n" en caso de fallo, ambas usando write.

validation.c :Las funciones de control de reglas. Verifica que no se repitan números en filas/columnas (regla Sudoku) y comprueba si se cumple la visibilidad de los edificios según las pistas.

solver.c :La lógica pesada. La función recursiva de Backtracking que intenta rellenar las casillas del tablero y retrocede si comete un error.

#include <unistd.h>
#include <stdlib.h>
*/
