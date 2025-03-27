#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_string - Imprime una cadena en la salida estánda.
 * @str: La cadena a imprimir.
 * Return: Número de caracteres impresos
 */
int _print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)"; /* Manejar caso NULL */

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * _print_int - Imprime un número entero en la salida estánda
 * @num: El número entero a imprimir
 * Return: Número de caracteres impresos
 */

