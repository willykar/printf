#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

struct formatted_string
{
	char formatted_string;
	int (*fn)(va_list, char[], int, int, int, int);
};

typedef struct formatted_string formatted_string_t;

int _printf(const char *format, ...);
<<<<<<< HEAD
int handle_print(const char *formatted_string, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);


int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

=======
int _write(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
char *reverse_string(char *s);
void write_base(char *str);
unsigned int base_length(unsigned int number, int base);
char *_memcpy(char *dest, char *src, unsigned int num_bytes);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int print_unsigned_number(unsigned int);
>>>>>>> 6f82ad257bb7582506b7f257608287e5da1bf947
#endif /* MAIN_H */
