#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @s: string to transform
 *
 * Return: pointer to transformd string
 */
char *string_toupper(char *s)
{
	char *q = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (q);
}
