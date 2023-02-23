#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: triangle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int start = 0, end = size, count;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (count = 0; count < end; count++)
		{
			while (start < end)
			{
				if ((start + count + 1) >= end)
					putchar('#');
				else
					putchar(' ');
				start++;
			}
			start = 0;
			putchar('\n');
		}
	}
}
