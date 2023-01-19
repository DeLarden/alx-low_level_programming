#include "function_pointer.h"

/**
 * print_name - Prints a name
 * @name: the name given
 * @f: function of name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
