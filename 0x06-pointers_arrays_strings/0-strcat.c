#include "main.h"

/**
 * strcat - Concatenates string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, char *src)
{
	int i = 0, longi = 0;

	while (dest[i++])
		longi++;

	for (i = 0; src[i]; i++)
		dest[longi++] = src[i];

	return (dest);
}
