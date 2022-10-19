#include "main.h"

/**
 * _vprintf - function to print the characters in a printf function
 * @format: first string to print
 * @ap: list of va_list argument to print from
 * Return: number of characters printed
 */
int _vprintf(const char *format, va_list ap)
{
	int len = 0;
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				_putchar(*format);
				len++;
			}
		}
		else if (state == 1)
		{
			len += _state(format, ap);
			state = 0;
		}
		format++;

	}
	return (len);
}
