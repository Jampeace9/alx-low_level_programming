#include <stdio.h>

/**
 * _memcpy - copy mem
 * @dest: pointer to buffer
 * @src: pointer to buffer
 * @n: number of bytes to copy
 *
 * Description: copy n bytes from src to dest
 *
 * Return: pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
