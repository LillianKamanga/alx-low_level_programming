#include "main.h"
/**
 * _isalpha - checks sfor upper and lower case
 * @c:  The paramenter to be Checked
 * Return: if charecter is uppercase or lowercase
 */

int _isalpha(int c)
{
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		{

			return (1);
		}
		return (0);
}
