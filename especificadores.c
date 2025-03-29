#include <stdarg.h>
#include "main.h"

/**
 * especificadores - Maneja los especificadores de formato
 * @format: caracter de los especificadores
 * @args: lista de argumentos
 * Return: retorna el numero de caracteres impresos
 */

int especificadores(char format, va_list args)
{
	int count = 0;

	if (format == 'c')
	count += _putchar(va_arg(args, int));

	else if (format == 's')
	count += print_string(va_arg(args, char *));

	else if (format == '%')
	count += _putchar('%');

	else if (format == 'd')
	count += print_int(va_arg(args, int));

	else if (format == 'i')
	count += print_int(va_arg(args, int));

	else
	{
	count += _putchar('%');
	count += _putchar(format);
	}

	return (count);
}
