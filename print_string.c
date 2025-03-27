#include "main.h"

/**
 * print_string - imprime la cadena de caracteres
 * @str: la cadena que se debe imprimir
 * 
 * return: retorna el numero de caracteres impresos
 */
int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";
		

	while (str[i] != '\0')
	{
		i = i + _putchar(str[i]);
		i++;
	}

	return (i);
}
