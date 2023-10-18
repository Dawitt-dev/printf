#include "main.h"
/**
 * print_char - Prints a character
 *@args: arguments list
 * Return: 1
 */
int print_characters(va_list args)
{
	putchar(va_arg(args, int));
	return (1);
}
/**
 * print_string - prints a string.
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
		putchar(*str);
		str++;
		count++;
	}
	return (count);
}
/**
 * print_int - prints integers
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
		putchar('-');
		num = -num;
		count++;
	}
	while (num / power > 9)
	{
		power *= 10;
	}
	while (power > 0)
	{
		putchar((num / power) + '0');
		num %= power;
		power /= 10;
		count++;
	}
	return (count);
}
int print_decimals(va_list args)
/**
 * print_decimals - prints decimals
 *@args: argument list 
 * Return: number of characters printed
 */
{
	int num = va_arg(args, int);
	int count = 0;
	int power = 1;

	if (num < 0)
	{
		putchar('-');
		num = -num;
		count++;
	}
	while (num / power > 9)
	{
		power *= 10;
	}
	while (power > 0)
	{
		putchar((num / power) + '0');
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
	(void)args;
	return (putchar('%'));
}
