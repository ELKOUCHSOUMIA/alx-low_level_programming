#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
