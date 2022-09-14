#include "main.h"

/**
 * main - print alphabets 10x
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n = 97;
	int x;

	for (x = 0; x < 10; x++)
	{
		while (n < 123)
		{
			putchar(n);
			n++;
		}
		putchar('\n');
}
