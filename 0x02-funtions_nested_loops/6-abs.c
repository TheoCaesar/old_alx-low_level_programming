#include "main.h"

/**
 * _abs - get absolute val of n
 *
 * Return: Always return n or (-n)
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
