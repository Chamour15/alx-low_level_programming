#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 *
 * Return: the number of bytes that accepted.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}

		if (bool == 1)
		{
			break;
		}
	}

	return (i);
}

