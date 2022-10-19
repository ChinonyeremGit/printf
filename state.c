#include "main.h"
/**
 * _state - function to print arguments
 * @format: string
 * @ap: list of arguements
 * Return: number of characters printed
 */
int _state(const char *format, va_list ap)
{
	int len = 0;

	switch (*format)
			{
			case 'c':
				{
				char ch = va_arg(ap, int);

				_putchar(ch), len++;
				break;
				}
			case 's':
				{
					char *ch = va_arg(ap, char *);

					len += _puts(ch);
					break;
				}
			case '%':
				{
					_putchar('%'), len++;
					break;
				}
			case 'i':
			case 'd':
				{
					int ch = va_arg(ap, int), base = 10;
					char *p, a[100];

					p = _itoa(ch, a, base);

					len += _puts(p);
					break;
				}
			}
			return (len);
}
