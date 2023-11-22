#include <unistd.h>
#include "main.h"
/**
 * print_c - writes the character c to stdout
 *@args: variablre number of parameters
 *Return: on success 1
*/

int print_c(va_list args)
{

	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
