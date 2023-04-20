#include "variadic_functions.c"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints stirngs
 * @separator: the strings parameter
 * @n: number of parameter
 * @...: variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int a;

	va_start(string, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string)
}
