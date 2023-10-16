#include "main.h"
/**
 * formatStringPrinter - print a formated string
 * @format: string containing all the characters
 * @fmt_list: All the posible functions
 * @args: argumentents passed
 * Return: characters printed.
 */
int formatStringPrinter(const char *format, fmt_t fmt_list[], va_list args)
{
	int i, a, r_val, printed_characters;

	printed_characters = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (a = 0; fmt_list[a].fmt != NULL; a++)
			{
				if (format[i + 1] == fmt_list[a].fmt[0])
				{
					r_val = fmt_list[a].f(args);
					if (r_val == -1)
						return (-1);
					printed_characters += r_val;
					break;
				}
			}
			if (fmt_list[a].fmt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					printed_characters = printed_characters + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_write(format[i]);
			printed_characters++;
		}
	}
	return (printed_characters);
}
