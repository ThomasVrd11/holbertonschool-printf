#include "main.h"

/**
 * print_s - prints string to stdout
 * @str: pointer to the  strings
 * Return: 0 on success
 */

int print_s(char *str)
{
	if (str == NULL)
		return (NULL);

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
