#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - Imprime un número entero en la salida estándar.
 * @n: Número entero a imprimir.
 *
 * Descripción: Convierte un número entero en una cadena de caracteres y
 * lo imprime usando la función write(). Soporta números negativos.
 * Return: Número de caracteres impresos.
 */
int print_int(int n)
{
	char buffer[12];
	int i = 0, count = 0;

	if (n == 0)
	{
	write(1, "0", 1);
	return (1);
	}

	if (n < 0)
	{
	write(1, "-", 1);
	count++;
	n = -n;
	}

	while (n > 0)
	{
	buffer[i++] = (n % 10) + '0';
	n /= 10;
	}

	while (i--)
	{
	write(1, &buffer[i], 1);
	count++;
	}

	return (count);
}
