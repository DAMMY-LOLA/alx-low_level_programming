#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: number of character to concentracte.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, o;

	m = 0;
	o = 0;

	while (dest[m] != '\0')
		m++;

	while (src[o] != '\0' && o < n)
	{
		dest[m] = src[o];
		m++;
		o++;
	}

	dest[m] = '\0';

	return (dest);
}
