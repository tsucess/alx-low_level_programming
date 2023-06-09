#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function thats everything out
 * @format: parameter list
 * @...: variable number
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *div = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", div, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", div, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", div, va_arg(list, double));
					break;
				case 's':
					str =  va_arg(list, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", div, str);
					break;
				default:
					a++;
					continue;
			}
			div = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(list);
}
