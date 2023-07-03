#include "main.h"

/**
 * _strstr-> a function that locates a substring.
 *
 * @haystack: haystack is a pointer to char parameter
 * @needle: needle is a pointer to char parameter
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
