#include <stdio.h>

/**
 * main - digits from 0-9 using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 0;

	for (; x < 10; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
