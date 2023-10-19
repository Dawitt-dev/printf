#include "main.h"
/**
 * get_function - gets function
 *
 *@type: type specifier
 * Return: NULL
 */
int (*get_function(char type))(va_list)
{

	int j = 0;
	printer_t  printers[] = {
		{'c', print_characters},
		{'s', print_strings},
		{'%', print_percent},
		{'d', print_decimals},
		{'i', print_integers},
		{'\0', NULL}
	};

	while (printers[j].type != '\0')
	{
		if (printers[j].type == type)
		{
			return (printers[j].func);
		}
		j++;
	}
	return (NULL);
}
