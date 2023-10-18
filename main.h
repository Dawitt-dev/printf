#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int(*get_function(char printer))(va_list);
int _printf(const char *format, ...);
int print_characters(va_list args);
int print_strings(va_list args);
int print_percent(va_list args);
int print_integers(va_list args);
int print_decimals(va_list args);
#endif
