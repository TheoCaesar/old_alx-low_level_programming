#include "main.h"

/**
 * times_table - give a multiplication table of 9 x 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		int an;

		for (b = 0; b < 10; b++)
		{
			an = b * a;
			if (an > 9)
			{
				int ln, fn;

				ln = an % 10;
				fn = an / 10;
				_putchar('0' + fn);
				_putchar('0' + ln);
				if (b != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				if (b > 0)
					_putchar(32);
				_putchar('0' + an);
				if (b != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
