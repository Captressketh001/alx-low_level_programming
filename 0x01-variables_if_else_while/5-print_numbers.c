#include <stdio.h>

/**
 * main - program that prints all single digits
 * of base ten starting from zero
 * Return: 0 if successful
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	{
		printf("%d", digits);
	}
	printf("\n");
	return (0);
}
