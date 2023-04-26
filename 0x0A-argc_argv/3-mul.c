#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string to convert
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, b, c, len, e, digit;

	i = 0;
	b = 0;
	c = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && e == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			e = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			e = 0;
		}
		i++;
	}

	if (e == 0)
		return (0);

	return (c);
}
/**
 * main - program that multiplies two numbers
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0(success), 1(Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
