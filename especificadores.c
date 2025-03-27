#include <stdarg.h>
#include "main.h"
/**
 * especificadores - 
 *
 *
 *
 */
int especificadores(char format, va_list args)
{
	int count = 0;
	
	if (format == 'c') /* %c */
		count = count + _putchar(va_arg(args, int));
	
	else if (format == 's') /* %s */
		count = count + print_string(va_arg(args, char *));
	
	else if (format == '%') /* % */
		count = count + _putchar('%');
	
	else
	{
		count = count + _putchar('%');
		count = count + _putchar(format);
	}
	
	return (count);
}
