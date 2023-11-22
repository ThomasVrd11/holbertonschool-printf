#include "main.h"

/**
 * print_id - print i and d and sends them to int and deci
 * @n: number to be printed
 * Return: the correct count
 */

int print_id(int n)
{
	int char_count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		char_count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10 != 0)
	{
		char_count += print_id(num / 10);
	}

	_putchar((num % 10) + '0');
	char_count++;

	return (char_count);
}
