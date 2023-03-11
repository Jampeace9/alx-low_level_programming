#include <stdio.h>

/**
 * _memset - sets mem
 * @s: pointer to buffer
 * @b: char to fill buffer with
 * @n: number of bytes to fill
 *
 * Description: fill n byes of buffer with b
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
