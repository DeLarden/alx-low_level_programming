#include "main.h"

/**
 * _strpbrk - function that searches a string
 * for a set of bytes
 * @s: first occurence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{

			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
