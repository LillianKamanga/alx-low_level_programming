#include <stdio.h>

/**
 * _strlen - Returns lenth of the string
 * @str:the string to get the length of
 *
 * Return:the length of the @str.
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
