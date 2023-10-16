#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

struct format_string
{
	char *fmt;
	int (*f)(va_list);
};
typedef struct format_string fmt_t;

int formatStringPrinter(const char *format, fmt_t fmt_list[], va_list args);
int _printf(const char *format, ...);
int _write(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int print_unsigned_number(unsigned int);

#endif /* MAIN_H */
