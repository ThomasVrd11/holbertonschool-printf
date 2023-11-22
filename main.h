#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct toprint - type of argument to print/ specifier letter
 *  and pointer to func
 * @letter: type of specifier letter (format[i +1]) example d s c
 * @f: function that is associated with the specifier letter ^^
 */

/* -----------little typedef--------- */

typedef struct toprint
{
	char *letter;
	int (*f)(va_list args);
} toprint_;

/* -------all functions used-------- */

int print_c(va_list args);
int _printf(const char *format, ...);
int print_s(va_list args);
int print_int(va_list args);
int print_deci(va_list args);
int print_purcent(__attribute__((unused)) va_list args);
int _putchar(char);
int selection(va_list args, char specifiers);
int print_id(int n);

#endif
