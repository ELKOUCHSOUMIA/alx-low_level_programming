#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal
 *
 *@n: the number of times the _ should be printed
 */

void print_line(int n)
{
	int InChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (InChr = 1; InChr <= n; InChr++)
			_putchar('_');
		_putchar('\n');
	}
}
