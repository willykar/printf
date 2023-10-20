#include "main.h"
/**
 * get_size - calculates the size to cast the argument
 * @format: formatted string in which to print the arguments
 * @i: list of arguments to be printed
 * Return: (size)
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int s = 0;

	if (format[curr_i] == 'l')
		s = S_LONG;
	else if (format[curr_i] == 'h')
		s = S_SHORT;

	if (s == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (s);
}
