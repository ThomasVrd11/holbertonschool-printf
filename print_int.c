#include "main.h"

/**
 * print_int- print integers
 * @args: arguments
 * Return: to function id
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);

	return (print_id(n));
}
