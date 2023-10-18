#include "main.h"
/**
 * _printf - Produces output according to a format
 *@format: The format string
 * Return: The number of characters printed except the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0;
	const char *ptr;

	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			_putchar(*ptr);
			count++;
		}
		else if (*(ptr + 1) == '%')
		{
			_putchar('%');
			count++;
			ptr++;
		}
		else if (*(ptr + 1) && get_function(*(ptr + 1)))
		{
			count += get_function(*(ptr + 1))(args);
			ptr++;
		}
		else
		{
			_putchar(*ptr);
			count++;
		}
	}
	va_end(args);
	return (count);
}
