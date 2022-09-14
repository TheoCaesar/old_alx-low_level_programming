#include "main.h"

/**
 * main - A program that prints _putchar, followed by a new line
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int x = 0;

	do
	{
		_putchar(arr[x]);
		x++;
	}
	while (x <8);
	_putchar('\n');
	return (0);
}
