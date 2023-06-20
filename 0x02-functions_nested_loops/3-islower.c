#include "main.h"



/**
* int _islower - Checks for lowercase charecter
*
* @c: The charecter to be checked
* Return: 1 if lower case charecters are there and c if theyre not
*/


int _islower(int c)
{

if (c >= 97 && c <= 122)
	{
	return (1);
	}

return (0);
}
