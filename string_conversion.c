#include "main.h"
/**
 * print_reversed - reverses a string
 * @args: arguments
 * Return: characters printed
*/
int print_reversed(va_list args)
{
char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
/**
 * rot13 - a function that converts string to rot13
 * @args: string to convert
 * Return: a converted string
 */
int rot13(va_list args)
{
	int i;
	int j;
	char *str;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotalpha[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == alpha[j])
			{
				_write(rotalpha[j]);
				break;
			}
		}
		if (j == 53)
			_write(str[i]);
	}
	return (i);
}
