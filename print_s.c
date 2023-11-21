#include "main.h"

/**
 * print_s - prints string to stdout
 * @str: pointer to the  strings
 * Return: 0 on success
 */

int print_s(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
