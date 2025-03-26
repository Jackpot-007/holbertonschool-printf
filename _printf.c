#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - Escribe un solo carácter en la salida estánda
 * @c: El carácter a imprimir
 * Return: En caso de éxio 1, en caso de error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

