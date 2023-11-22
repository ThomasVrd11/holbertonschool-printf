#include "main.h"
/**
 * print_deci - prints decimal
 * @args: arguments to print
 * Return: number of argument to be printed
 */

int print_deci(va_list args)
{
	int n;
	int char_count = 0;
	int digit;

	n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		char_count++;
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
		n /= 10;
		char_count++;
	}

	return (char_count);
}
