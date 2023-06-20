#include "main.h"
/**
 * _isalpha - checks sfor upper and lower case
 * @c - is the paramenter used for checking
 * Return: if charecter is uppercase or lowercase
 */

int _isalpha(int c)
{
		if (c >= 97 && c <= 122)
		{
			if (c >= 65 && c <= 90)
			{ return (1);
			}
		}
		return (0);
}
