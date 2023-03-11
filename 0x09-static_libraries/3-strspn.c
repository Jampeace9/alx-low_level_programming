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

/**
 * _strspn - get bytes
 * @s: pointer to buffer
 * @accept: pointer to chars to search for
 *
 * Description: search for and count accept
 * chars c in s
 *
 * Return: unsigned int
 */
unsigned int  _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;

	if (!(*accept))
		return (count);

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (_strchr(accept, *(s + i)))
		{
			count++;
			continue;
		}

		if (count)
			break;
	}

	return (count);
}
