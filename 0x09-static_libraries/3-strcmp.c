#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string
 * @s2: string
 *
 * Return: 1, 0 or less than 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

