#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: line length
 * Return: void
 */

void print_diagonal(int n)
{
	int count = 0, start = 0, end;

	if (n <= 0)
		putchar('\n');
	else
	{
		while (count < n)
		{
			end = count;
			while (start <= end)
			{
				if (start == end)
				{
					putchar('\\');
					putchar('\n');
				}
				else
					putchar(' ');
				start++;
			}
			start = 0;
			count++;
		}
	}
}
