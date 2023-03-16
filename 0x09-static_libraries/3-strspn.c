#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;
	char *a;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
		{
			return (count);
		}
	}

	return (count);
}
