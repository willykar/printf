#include "main.h"
/**
 * write - writes the character c to stdout
 * @c: The character to print out
 * Return: On success 1 and -1 if error
 */
int _write(char c)
{
        return (write(1, &c, 1));
}
