#include "main.h"
/**
 * print_characters - Prints a character
 *@args: arguments list
 * Return: 1
 */
int print_characters(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
/**
 * print_strings - prints a string.
 *@args: arguments list
 * Return: number of characters printed
 */
int print_strings(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}
/**
 * print_integers - prints integers
 *@args: argument list
 * Return: number of characters printed
 */
int print_integers(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int power = 1;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	while (num / power > 9)
	{
		power *= 10;
	}
	while (power > 0)
	{
		char digit = (num / power) + '0';

		write(1, &digit, 1);
		num %= power;
		power /= 10;
		count++;
	}
	return (count);
}
/**
 * print_decimals - prints decimals
 *@args: argument list
 * Return: number of characters printed
 */
int print_decimals(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int power = 1;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	while (num / power > 9)
	{
		power *= 10;
	}
	while (power > 0)
	{
		char digit = (num / power) + '0';

		write(1, &digit, 1);
		num %= power;
		power /= 10;
		count++;
	}
	return (count);
}
/**
 * print_percent - print the percent sign
 *@args: argument list
 * Return: %
 */
int print_percent(va_list args)
{
	char percent = '%';
	(void)args;
	return (write(1, &percent, 1));
}
