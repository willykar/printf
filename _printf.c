#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: contain characters
 * Return: success
 */
int _printf(const char *format, ...)
{
	int printed_characters = 0;

	fmt_t fmt_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX}
	};

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	printed_characters = formatStringPrinter(format, fmt_list, args);

	va_end(args);
	return (printed_characters);
}
