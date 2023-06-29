#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, num2 = 0;

	while (*(dest + num) != '\0')
	{
		num++;
	}

	while (num2 < n)
	{
		*(dest + num) = *(src + num2);
		if (*(src + num2) == '\0')
			break;
		num++;
		num2++;
	}
	return (dest);
}
