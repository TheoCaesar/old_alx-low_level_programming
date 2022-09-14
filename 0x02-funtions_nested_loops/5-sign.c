#include "main.h"

/**
 * print_sign - check positive or negaive
 *
 * @n: numeric input
 *
 * Return: always 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else if (n==0)
	{
		_putchar(48);
		return (0);
	}

	else 
	{
		_putchar(43);
		return (1);
	}
}
