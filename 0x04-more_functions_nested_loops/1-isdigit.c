#include "main.h"

/**
 * _isdigit - checks for a digit from 0 - 9
 *
 * @c: character to determine
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);

	}
	return (0);
}
