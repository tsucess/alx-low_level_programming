#include "main.h"
/**
 * set_string - function that set the value of a pointer to a char
 * @s: double pointer with type char
 * @to: single pointer with type char
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
