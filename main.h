#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int print_characters(va_list args);
int print_strings(va_list args);
int print_percent(va_list args);
int print_integers(va_list args);
int print_decimals(va_list args);
/**
 * struct printer - prints
 *@type: type specifier
 *@func: function associated
 */
struct printer
{
	char type;
	int (*func)(va_list);
};

int (*get_function(char type))(va_list);
#endif
