#include "main.h"

/**
 * reverse_string - reverses a string
 * @s: string to be reversed
 * Return: pointer to character
 */
char *reverse_string(char *s)
{
	int length;
	int head;
	char tmp;
	char *dest;

	for (length = 0; s[length] != '\0'; length++)

	dest = malloc(sizeof(char) * length + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, length);
	for (head = 0; head < length; head++, length--)
	{
		tmp = dest[length - 1];
		dest[length - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - characters to be written to standard output
 * @str: String
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write(str[i]);
}

/**
 * base_length - calculates the length for octal number
 * @number: length being calculated
 * @base: Base
 * Return: an integer representing the length of a number
 */
unsigned int base_length(unsigned int number, int base)
{
	unsigned int i;

	for (i = 0; number > 0; i++)
	{
		number = number / base;
	}
	return (i);
}

/**
 * _memcpy - funtion to copy memory area
 * @dest: Destination to copy
 * @src: Source of the copy
 * @num_bytes: number of bytes to copy
 * Return: (pointer to dest)
 */
char *_memcpy(char *dest, char *src, unsigned int num_bytes)
{
	unsigned int i;

	for (i = 0; i < num_bytes; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
