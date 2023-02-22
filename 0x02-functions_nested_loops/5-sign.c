#include "main.h"

/**
 * prin-sign - prints the sign of a number
 * @n: The input number to check
 *
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
