#include <stdio.h>

/**
 * _strlen - length
 * @c: pointer to string
 *
 * Description: get length of string
 *
 * Return: int
 */
int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}

/**
 * _strncpy - copy
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bytes to copy
 *
 * Description: copy one string into another
 *
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = _strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i >= len)
		{
			*(dest + i) = '\0';

			continue;
		}

		*(dest + i) = src[i];
	}

	return (dest);
}
