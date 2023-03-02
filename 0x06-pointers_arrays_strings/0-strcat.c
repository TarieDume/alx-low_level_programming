#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: input value
 * @src: input value
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
