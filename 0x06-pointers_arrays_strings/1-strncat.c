#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings using number of bytes from src
 * @dest: The string to be appended upon
 * @src: The string to be appended to
 * @n: The number of bytes from src to be appended to
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
