#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: char to check
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
