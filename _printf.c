#include "main.h"

/**
 * _printf - my custom printf function
 * @format: string to print if any
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list ap;

	va_start(ap, format);

	len = _vprintf(format, ap);
	va_end(ap);
	return (len);
}
