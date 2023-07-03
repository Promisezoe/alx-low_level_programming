#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string
 * @s: The string
 * @accept: The set of bytes to search for
 * Return: Pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
