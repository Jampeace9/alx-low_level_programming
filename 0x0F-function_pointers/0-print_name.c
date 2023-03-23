#include "function_pointers.h"

/**
 * print_name - print
 * @name: string
 * @f: function pointer
 *
 * Description: print string based on the function passed
 * as argument.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
