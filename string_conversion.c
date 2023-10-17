#include "main.h"
/**
 * print_reversed - reverses a string
 * @args: arguments
 * Return: characters printed
*/
int print_reversed(va_list args)
{
	int length;
	char *str;
	char *ptr;

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	ptr = reverse_string(str);

	if (ptr == NULL)
		return (-1);

	for (length = 0; ptr[length] != '\0'; length++)
		_write(ptr[length]);

	free(ptr);
	return (length);
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
