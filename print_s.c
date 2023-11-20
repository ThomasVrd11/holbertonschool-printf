#include "main.h"

/**
 * print_s - prints string to stdout
 * @str: pointer to the  strings
 * Return: 0 on success
 */

void print_s(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
