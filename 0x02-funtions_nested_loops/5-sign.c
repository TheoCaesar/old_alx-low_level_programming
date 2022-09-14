#include "main.h"

/**
 * main - check positive or negaive
 *
 * Return: always 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		putchar(45);
		return (-1);
	}

	else if (n==0)
	{
		putchar(48);
		return (0);
	}

	else 
	{
		putchar(43);
		return (1);
	}
}
