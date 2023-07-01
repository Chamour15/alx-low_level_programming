#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: the source.
 * @dest: destination.
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int lenCount1 = 0, lenCount2 = 0;

	while (*(dest + lenCount1) != '\0')
	{
		lenCount1++;
	}

	while (lenCount2 >= 0)
	{
		*(dest + lenCount1) = *(src + lenCount2);
		if (*(src + lenCount2) == '\0')
		{
			break;
		}

		lenCount1++;
		lenCount2++;
	}
	return (dest);
}

