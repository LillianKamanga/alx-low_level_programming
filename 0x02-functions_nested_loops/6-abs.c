#include "main.h"
/**
 * _abs - checks for absolute values
 * @c: determines the absolute value
 * Return:  abs_val and c
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
