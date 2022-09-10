#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	int x = 0;

	for (; x <= 9; x++)
		putchar('0' + x);
	for (; letter != 'g'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
