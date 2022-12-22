#include "main.h"
/**
 * _strncat - concatenate two strings with number of bytes entered
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer pararmeter to compare index with
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
