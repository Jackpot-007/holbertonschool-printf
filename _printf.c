#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_string - Imprime una cadena en la salida estánar.
 * @str: La cadena a imprimir.
 * Return: Número de caracteres impresos
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	
	
	if (format == NULL)
	{
		return (-1);
	}
	
	va_start (args, format);

	while (*format)
	{
		if(*format == '%') /*por si encuentra un %*/
		{
			format++;
			count = count + especificadores(*format, args);
		}
		else /*por si es un caracter normal*/
		{
			count = count + _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
