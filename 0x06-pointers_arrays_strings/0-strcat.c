#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int num  = 0, num2 = 0;

	while (*(dest + num) != '\0')
	{
		tally++;
	}

	while (num2 >= 0)
	{
		*(dest + num) = *(src + num2);
		if (*(src + num2) == '\0')
			break;
		num++;
		num2++;
	}
	return (dest);
}
