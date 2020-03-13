#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct form - Struct fmt
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct form
{
	char *op;
	void (*f)(va_list ptall);
} fmt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printchar(va_list c);
void printint (va_list i);
void printfloat(va_list f);
void printstring(va_list s);

#endif
