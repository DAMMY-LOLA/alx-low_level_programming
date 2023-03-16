#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: char variable
 * @n: unsigned int variable
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  p;

	for (p = 0; p < n; p++)
		*(s + p) = b;

	return (s);
}
