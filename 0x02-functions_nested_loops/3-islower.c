#include "holberton.h"

/**
 * _islower - verify if it an lowercase alphabet character
 * @c: Value
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
