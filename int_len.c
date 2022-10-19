#include "main.h"

/**
 * int_len - function to print the number of digits in an int
 * @num: number to print its digit
 * Return: length of int.
 */
int int_len(long num)
{
	int len = 1;

	while (num > 9)
	{
		len++;
		num = num / 10;
	}
	return (len);
}
