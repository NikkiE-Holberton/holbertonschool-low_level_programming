#include "holberton.h"

/**
 * char *_strcat - append the src string to the dest string,
 * @src: Varuable
 * @dest: Variable
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x;


	while (dest[i] != '\0')
		i++;
	for (x = 0 ; src[x] != '\0'; x++)
		dest[i + x] = src[x];

	return (dest);

}
