#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/* printf */

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* printf */

int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* printf */

int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* printf */

char *convert(unsigned long int num, int base, int lowercase);

/* printf */

int _printf(const char *format, ...);

/* printf */

int (*get_print(char s))(va_list, flags_t *);

/* printf */

int get_flag(char s, flags_t *f);

/* printf */

int print_string(va_list l, flags_t *f);

/* printf */

int print_char(va_list l, flags_t *f);

/* printf */

int _putchar(char c);
int _puts(char *str);

/* printf */

int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* printf */

int print_address(va_list l, flags_t *f);

/* printf */

int print_percent(va_list l, flags_t *f);

#endif
