#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - funtion that prints name using pointer
 * @name: string parameter
 * @f: function pointer
 * Return: nothing void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
