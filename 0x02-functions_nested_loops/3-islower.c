#include "main.h"

/**
 * _islower - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if fasle
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
