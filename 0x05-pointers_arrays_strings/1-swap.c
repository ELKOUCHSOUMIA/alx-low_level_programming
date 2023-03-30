#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: swaps and store addresse of b
 * @b: swaps and store addresse of a
 * Return: 0(success)
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
