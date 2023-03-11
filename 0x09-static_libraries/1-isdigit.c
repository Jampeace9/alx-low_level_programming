#include "main.h"

/**
 * _isdigit - digit check
 * @c: this is the integer of the digit
 *
 * Description: checks digit and returns integer
 *
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
