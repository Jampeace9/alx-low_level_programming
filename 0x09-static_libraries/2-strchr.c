#include <stdio.h>

/**
 * _strchr - search
 * @s: pointer to buffer
 * @c: char to search for
 *
 * Description: search for char c in string
 *
 * Return: pointer to memory area
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != c)
			continue;

		return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
