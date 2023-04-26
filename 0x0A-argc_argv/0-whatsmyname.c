#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0(success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
