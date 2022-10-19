#include "main.h"

/**
 * _itoa - function to convert an interger to a string
 * @num: num to convert to string
 * @buff: buffer to store string
 * @base: base to which the conversion is made
 * Return: number in string form
 */
char *_itoa(long num, char *buff, int base)
{
	int i = 0;
	int isnegative = 0;
	long l = num;

	if (base < 2 && l > 16)
		return ('\0');
	if (l < 0 && base == 10)
	{
		isnegative = 1;
		l = l * (-1);
	}

	if (l == 0)
	{
		buff[i++] = '0';
		buff[i] = '\0';
		return (buff);
	}
	while (l != 0)
	{
		int rem = l % base;

		buff[i++] = (rem > 9) ? (rem - 9) + 'a' : rem + '0';
		l = l / base;
	}

	if (isnegative == 1)
		buff[i++] = '-';
	buff[i] = '\0';
	reverse(buff, i);
	return (buff);
}
