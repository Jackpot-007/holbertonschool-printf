#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Imprime segun el formato que sea
 * @format: cadena que contiene los especificadores
 * Return: Número de caracteres impreso
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;


	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format == '%') /*por si encuentra un %*/
		{
			format++;
			if (*format == '\0')
				return (-1);
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
