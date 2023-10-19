#include "main.h"
/**
 * _printf - Produces output according to a format
 *@format: The format string
 * Return: The number of characters printed except the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			write(1, ptr, 1);
			count++;
		}
		else if (*(ptr + 1) == '%')
		{
			write(1, "%", 1);
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
			write(1, ptr, 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
