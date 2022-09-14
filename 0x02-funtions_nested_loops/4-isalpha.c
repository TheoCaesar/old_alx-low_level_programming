#include "main.h"

/**
 * main - alphabets upper case fxn 
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
