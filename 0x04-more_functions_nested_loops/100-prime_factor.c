#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long pf = 612852475143, div;

	while (div < (pf / 2))
	{
		if ((pf % 2) == 0)
		{
			pf /= 2;
			continue;
		}

		for (div = 3; div < (pf / 2); div += 2)
		{
			if ((pf % div) == 0)
				pf /= div;
		}
	}

	printf("%ld\n", pf);

	return (0);
}
