#include "main.h"

/**
 * print_id - print i and d and sends them to int and deci
 * @n: number to be printed
 * Return: the correct count
 */
int print_id(int n)
{
	int char_count = 0;

	if (n < 0)
	{
		_putchar('-');
		char_count++;
	}

	if (n / 10 != 0)
	{
		char_count += print_id(n / 10);
	}

	if (n < 0)
	{
		_putchar(-(n % 10) + '0');
	}
	else
	{
		_putchar((n % 10) + '0');
	}
	char_count++;

	return (char_count);
}
