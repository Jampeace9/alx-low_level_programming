#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase followed by uppercase alphabets
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(toupper(lc));
	}
	putchar('\n');
	return (0);
}
