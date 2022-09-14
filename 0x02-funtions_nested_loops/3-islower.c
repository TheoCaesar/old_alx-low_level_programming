#include "main.h"

/**
 * main - check if lowercase
 *
 * Return: Alwasy 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
