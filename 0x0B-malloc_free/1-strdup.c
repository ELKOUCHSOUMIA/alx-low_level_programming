#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *new;
	int i, c = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		new[c] = str[c];

	return (new);
}
