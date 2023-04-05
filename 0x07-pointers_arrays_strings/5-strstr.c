#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to serach for
 * Return: pointer to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack)
	{
		for (k = 0; needle[k] && haystack[k] && needle[k] == haystack[k]; k++)
			;
		if (!needle[k])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
