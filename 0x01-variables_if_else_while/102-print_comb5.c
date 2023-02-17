#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * all possible combination of 2 2-digits number
	 * both seperated by space, and coma after
	 */

	/*declare both numbers*/
	int a, b;

	/*loop through highest possible of a=98,with 1 less than b*/
	for (a = 0 ; a <= 98 ; a++)
	{
		/*loop through highest of b=99,starting with 1 higherthan a*/
		for (b = a + 1 ; b <= 99 ; b++)
		{
			/*print all two digit value of both numbers*/
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			/*continue to put coma & space until final combination*/
			if (a == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
