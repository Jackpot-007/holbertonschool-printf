#include "main.h"

/**
 * print_string - imprime la cadena de caracteres
 * @str: la cadena que se debe imprimir
 * Return: retorna el numero de caracteres impresos
 */
int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
