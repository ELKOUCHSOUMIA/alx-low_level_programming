#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @n: specific char
 *
 * Return: Returns a pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char n)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = n;
	return (str);
}
