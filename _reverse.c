#include "main.h"

/**
 * reverse - function to reverse a string
 * @str: string to reverse
 * @len: length of string to reverse
 */
void reverse(char *str, int len)
{
	int low = 0;
	int hi = len - 1;

	while (low < hi)
	{
		*(str + low) = *(str + low) ^ *(str + hi);
		*(str + hi) = *(str + low) ^ *(str + hi);
		*(str + low) = *(str + low) ^ *(str + hi);
		low++, hi--;
	}
}
