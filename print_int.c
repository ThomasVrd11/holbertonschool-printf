#include"main.h"

/**
 * print_int- print integers
 * @args: arguments to print
 * Return: number of arguments to be printed
 */

int print_int(va_list args)
{
	int n;
	int char_count = 0;
	int digit;


	n = va_arg(args, int);

	if (n < 0)
	{
		print_c('-');
		char_count++;
		n = -n;
	}

	if (n == 0)
	{
		print_c('0');
		return (1);
	}

	while (n != 0)
	{
		digit = n % 10;
		print_c(digit + '0');
		n /= 10;
		char_count++;
	}

	return (char_count);

}