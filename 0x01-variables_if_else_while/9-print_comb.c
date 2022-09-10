#include <stdio.h>

/**
 * main - last projec
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;

	do {
		putchar('0' + x);
		if (x < 9)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	} while (x != 10);
	putchar('\n');
	return (0);
}
