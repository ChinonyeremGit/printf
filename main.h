#ifndef MAIN_H
#define MAIN H
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(const char *str);
int int_len(long num);
void reverse(char *str, int len);
char *_itoa(long num, char *buff, int base);
int _vprintf(const char *format, va_list ap);
int _printf(const char *format, ...);
int _state(const char *format, va_list ap);

#endif
