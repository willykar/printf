#include "main.h"
/**
 * print_char - printing characters
 * @args: argument lists
 * Return: characters printed
*/
int print_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}
/**
 * print_string - prints the string
 * @args: argument lists
 * Return: Characters printed
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write(str[i]);
	return (i);
}
/**
 * print_percent - prints $
 * @args: arguments lists
 * Return: characters printed
*/
int print_percent(__attribute__((unused))va_list args)
{
	_write('%');
	return (1);
}
/**
 * print_integer - prints integer
 * @args: the list of arguments
 * Return: return characters printed
 */
int print_integer(va_list args)
{
	int number_length;

	number_length = print_number(args);
	return (number_length);
}
/**
 * unsigned_integer - prints unsigned integers
 * @args: argument lists
 * Return: number counts
 */
int unsigned_integer(va_list args)
{
	unsigned int number;

	number = va_arg(args, unsigned int);

	if (number == 0)
		return (print_unsigned_number(number));
	if (number < 1)
		return (-1);
	return (print_unsigned_number(number));
}
