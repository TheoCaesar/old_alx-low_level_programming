#include <stdio.h>

/**
 * main - adv
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int a;
	int b;
	int c;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
