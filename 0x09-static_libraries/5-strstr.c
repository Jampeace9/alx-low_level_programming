#include <stdio.h>

/**
 * _strlen - get len
 * @c: pointer to buffer
 *
 * Description: get length of the string
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
 * _strstr - get substring
 * @haystack: pointer to buffer
 * @needle: pointer to chars to search for
 *
 * Description: search for the occurence of needle
 * in haystack
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, track;
	int nlen = _strlen(needle), hlen = _strlen(haystack);

	if (nlen == 0)
		return (haystack);

	if (!(*needle) || !(*haystack) || (nlen > hlen) || (hlen == 0))
		return (NULL);

	for (i = 0, j = 0; *(haystack + i) != '\0' && *(needle + j) != '\0'; i++, j++)
	{
		if (*(needle + j) == *(haystack + i))
		{
			j++;
		}
		else
		{
			j = 0;
			track = i + 1;
		}

		i++;
	}

	if (*(needle + j) == '\0' && j != 0)
		return ((haystack + track));

	return (NULL);
}
