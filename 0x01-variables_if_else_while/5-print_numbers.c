#include <stdio.h>

/**
 * main - Count 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	do {
		printf("%i", n);
		n++;
	} while (n < 10);
	printf("\n");
	return (0);
}
