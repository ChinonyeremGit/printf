#include "main.h"

/**
 * _putchar - function to write a character
 * @c: character to return
 * Return: 1 0o success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
