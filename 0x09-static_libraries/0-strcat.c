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
 * _strcat - concatenate
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Description: concatenant two strings
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int i;

	for (i = 0; i <= len2; i++)
	{
		*(dest + len1 + i) = src[i];
	}

	return (dest);
}
