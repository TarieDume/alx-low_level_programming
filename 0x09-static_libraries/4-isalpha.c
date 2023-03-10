#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c : charactor to check
 *
 * Return: 1 on success
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
