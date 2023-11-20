#include <unistd.h>

/**
*_putchar - writes the character c to stdout
*@args: variablre number of parameters
*Return: on success 1
*/

int _putchar(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
