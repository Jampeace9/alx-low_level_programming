#include "main.h"

/**
 * _isalpha - main code
 * @c: this is the value which has its case checked
 *
 * Description: this checks whether or no an alphabet is
 * in lowercase or not
 *
 * Return: 0 when alphabet is lower and 1 if not
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		result = 1;
	else
		result = 0;

	return (result);
}
