#include "main.h"

/**
 * main - print alphabets 10x
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int x;

	for (x = 0; x < 10; x++)
	{
		n = 97;
		while (n < 123)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
