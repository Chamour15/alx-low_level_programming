#include "main.h"
#include <stdio.h>

/**
 * infinit_add - function that adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size.
 *
 * Return: pointer to r.
 */
char *infinit_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, i2 = 0, j, j2, k, k2, l = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + i2) != '\0')
		i2++;
	if (i >= i2)
		j2 = i;
	else
		j2 = i2;
	if (size_r <= j2 + 1)
		return (0);
	r[j2 + 1] = '\0';
	i--, i2--, size_r--;
	k = *(n1 + i) - 48, k2 = *(n2 + i2) - 48;
	while (j2 >= 0)
	{
		j = k + k2 + l;
		if (j >= 10)
			l = j / 10;
		else
			l = 0;
		if (j > 0)
			*(r + j2) = (j % 10) + 48;
		else
			*(r + j2) = '0';
		if (i > 0)
			i--, k = *(n1 + i) - 48;
		else
			k = 0;
		if (i2 > 0)
			i2--, k2 = *(n2 + i2) - 48;
		else
			k2 = 0;
		j2--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

