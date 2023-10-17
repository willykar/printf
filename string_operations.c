#include "main.h"

int hex_check(int, char);

/**
 * print_binary - A function that converts a number from base 10 to binary
 * @args: arguments passed to the function
 * Return: printed number length
 */
int print_binary(va_list args)
{
	unsigned int number;
	int i, length;
	char *str;
	char *rev_str;

	number = va_arg(args, unsigned int);
	if (number == 0)
		return (_write('0'));
	if (number < 1)
		return (-1);
	length = base_length(number, 2);
	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; number > 0; i++)
	{
		if (number % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		number = number / 2;
	}
	str[i] = '\0';
	rev_str = reverse_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (length);
}

/**
 * print_octal - prints out number in base octal
 * @args: Arguments passed
 * Return: sysmbols printed
 */
int print_octal(va_list list)
{
	unsigned int number;
	int length;
	char *octal_rep;
	char *rev_str;

	num = va_arg(args, unsigned int);

	if (number == 0)
		return (_write('0'));
	if (number < 1)
		return (-1);
	len = base_length(number, 8);

	octal_rep = malloc(sizeof(char) * length + 1);
	if (octal_rep == NULL)
		return (-1);
	for (length = 0; num > 0; length++)
	{
		octal_rep[length] = (num % 8) + 48;
		number = number / 8;

	}
	octal_rep[length] = '\0';
	rev_str = reverse_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (length);
}

/**
 * print_hex - Prints base16 in lowercase
 * @args: arguments passed to the function
 * Return: characters printed
 */
int print_hex(va_list args)
{
	unsigned int number;
	int length;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(args, unsigned int);

	if (number == 0)
		return (_write('0'));
	if (number < 1)
		return (-1);
	len = base_length(number, 16);
	hex_rep = malloc(sizeof(char) * length + 1);
	if (hex_rep == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		rem_num = number % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[length] = rem_num;
		}
		else
			hex_rep[length] = rem_num + 48;
		number = number / 16;
	}
	hex_rep[length] = '\0';
	rev_hex = reverse_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (length);
}


/**
 * print_heX - Prints base16 Uppercase
 * @args: arguments passed to the function
 * Return: characters printed
 */
int print_heX(va_list args)
{
	unsigned int number;
	int length;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	number = va_arg(args, unsigned int);

	if (number == 0)
		return (_write('0'));
	if (number < 1)
		return (-1);
	len = base_length(number, 16);
	hex_rep = malloc(sizeof(char) * length + 1);
	if (hex_rep == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		rem_num = number % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[length] = rem_num;
		}
		else
			hex_rep[length] = rem_num + 48;
		number = number / 16;
	}
	hex_rep[length] = '\0';
	rev_hex = reverse_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - hex function
 * @num: convert to letter
 * @x: he function calling it
 * Return: (letter)
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
