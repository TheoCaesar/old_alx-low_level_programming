#include "main.h"
/**
 * print_alphabet - functions to print alphabets
 * Description: Je suis fatigue
 * Return: always 0
 */

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
