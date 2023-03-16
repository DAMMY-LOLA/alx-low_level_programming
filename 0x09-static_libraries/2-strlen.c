#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: int variable.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
