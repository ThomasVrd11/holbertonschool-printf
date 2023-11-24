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

	while (format != NULL && format[i] != '\0')
	{
		/**
		 * is it a format specifier ???
		 */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			length += selection(args, format[i + 1]);
			i += 2;
		}
		else

		{
			length += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
}
