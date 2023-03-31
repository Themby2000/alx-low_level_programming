#include "main.h"
/**
 *string_touper - change all lowercase to upprcase
 * @s: string
 *
 *Return: char
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
