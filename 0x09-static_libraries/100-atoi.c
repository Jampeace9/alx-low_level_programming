#include <stdio.h>

/**
 * is_number - length of string
 * @c: a character
 *
 * Description: checks whether a character is a
 * number or not
 *
 * Return: 0 or 1
 */

int is_number(char c)
{
	int result = 0;

	if (c >= 48 && c <= 57)
		result = 1;

	return (result);
}
/**
 * _strlen - length of string
 * @s: the pointer of the string
 *
 * Description: gets the length of a string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _atoi - convert to number
 * @s: the pointer of the string
 *
 * Description: converts the numbers in a string
 * to integers
 *
 * Return: int
 */

int _atoi(char *s)
{
	int len = _strlen(s), i = 0, d = 0;
	unsigned int number = 0;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			d++;
			continue;
		}

		if (is_number(s[i]))
		{
			number = number * 10 + (s[i] - '0');

			if (!is_number(s[i + 1]))
				break;
		}

	}

	if (d % 2)
		number *= -1;

	return (number);
}
