#include "main.h"

/**
 * _printf - produces output with printf command
 * @format: what we want to print
 * Return: number of characters printed withput null terminator
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int length = 0;
	/*chars to be printed*/

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	/**
	 * iterate over the format string
	 */
	while (format != NULL && format[i] != '\0')
	{
		/**
		 * is it a format specifier ???
		 */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			/*+= means = and +, example C += means C = C+A (cc christophe)*/

			length += selection(args, format[i + 1]);
			i++;
		}
		else
		/**
		 * print current character and add one to length
		 */
		{
			length += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
}
