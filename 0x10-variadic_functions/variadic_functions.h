#ifndef VARIADIC_H
#define VARIADIC_H

int _putchar(char);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);

char *formating(char c);

void printt(char c, va_list l, char *format, char *s, int i);

#endif
