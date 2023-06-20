#include "main.h"
/**
 * print_sign - checks for sign
 * @n: determines sign of values
 * Return:  1 , -1 and 0 for positive, negative and zero
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
return (0);
}
}
