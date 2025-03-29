#include <unistd.h>
#include <limits.h>
#include <stddef.h>
/**
 * int_max - imprime un numero entero
 * @n: numero entero que debe imprimir
 *
 * Return: retorna el numero de caracteres
 */
int int_max(int n)
{
	char buffer[12];
	int i = 0;
	int count = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n == INT_MIN)
	{
		count++;
		write(1, "2147483648", 10);
		return (count + 10);
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
