#include "main.h"

/**
 * prin-sign -  prints the sign of a number
 * @n: check the  input number
 *
 * Return: int.
 */

int print_sign(int n)
{
	if (n <0)
	{
		_putchar(43);
		return (1);

	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
