#include "main.h"
/**
 * print_number - prints a number received as argument
 * @args: arguments
 * Return: arguments printed
 */
int print_number(va_list args)
{
	int num;
	int divisor, length;
	unsigned int number;

	num = va_arg(args, int);
	divisor = 1;
	length = 0;

	if (num < 0)
	{
		length = length + _write('-');
		number = num * -1;
	}
	else
	{
		number = num;
	}
	while (number / divisor > 9)
		divisor = divisor * 10;
	while (divisor != 0)
	{
		length = length + _write('0' + number / divisor);
		number %= divisor;
		divisor = divisor / 10;
	}
	return (length);
}
/**
 * print_unsigned_number - prints unsigned number
 * @n: unsigned integer
 * Return: numbers printed
 */
int print_unsigned_number(unsigned int n)
{
	int divisor, length;
	unsigned int number;

	divisor = 1;
	length = 0;

	number = n;

	while (number / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		length += _write('0' + number / divisor);
		number %= divisor;
		divisor /= 10;
	}
	return (length);
}
