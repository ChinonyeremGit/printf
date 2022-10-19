#include "main.h"

/**
 * _puts - function to print a string
 * @str: string to print
 * Return: length of characters printed.
 */
int _puts(const char *str)
{
	int len = 0;

	while (*str)
	{
		_putchar(*str++);
		len++;
	}
	return (len);
}
