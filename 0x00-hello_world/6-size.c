#include<stdio.h>
/**
 * main - print the sizes of data types
 *
 * Return: zero if error, non zero if no error
*/
int main(void)
{
	printf("Size of a char: %ld byte(S)\n", sizeof(char));
	printf("Size of a int: %ld byte(S)\n", sizeof(int));
	printf("Size of a long int: %ld byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(S)\n", sizeof(float));
	return (0);
}
