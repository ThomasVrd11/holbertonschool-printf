#include "main.h"

/**
 * print_deci - prints a decimal number
 * @args: arguments
 * Return: the function id
 */

int print_deci(va_list args)
{
	int n = va_arg(args, int);

	return (print_id(n));
}
