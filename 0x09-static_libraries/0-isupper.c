#include "main.h"

/**
 * _isupper - uppercase check
 * @c: this is the integer of the alphabet
 *
 * Description: checks alphabet and returns integer
 *
 * Return: returns 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
