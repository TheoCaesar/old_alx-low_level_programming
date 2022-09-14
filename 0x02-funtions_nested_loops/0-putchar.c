#include "main.h"

/**
 * main - A program that prints _putchar, followed by a new line
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int x;

	for (x = 0; x < 8; x++)
	{
		putchar("%c", arr[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
