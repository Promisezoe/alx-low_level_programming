#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies an inputted number of bytes
 * @dest: The buffer storing the copy of a string
 * @src: The original string
 * @n: The maximum number of bytes
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
