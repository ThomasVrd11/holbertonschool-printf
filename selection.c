#include "main.h"

/**
 * selection - selects the correct function to execute
 * @args: list of arguments
 * @specifiers: the letter corresponding to format [i + 1]
 * Return: length of the string or intenger printedz
 */

int selection(va_list args, char specifiers)
{
	/* theses func will be executed according to format i+1 */
	/**
	 * c char
	 * s string
	 * i int
	 * % purcent specifier
	 * d decimal
	 */
	toprint_ decide[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_deci},
		{"i", print_int},
		{"%", print_purcent},
		{NULL, NULL}};

	int j = 0;

	while (decide[j].letter && specifiers)
	{
		if (decide[j].letter[0] == specifiers)
			return ((decide[j].f)(args));
		j++;
	}

	if (specifiers != '\0')
	{
		_putchar('%');
		_putchar(specifiers);
		return (2);
	}
	else
		/* when specifiers == NULL */
		return (_putchar('%'));
}
