#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9
 * Description - Prints numbers excluding 2 and 4
 * Return: numbers 0 - 9
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
		continue;
		}
		else
		{
		_putchar(x + '0');

		}

	}
	_putchar('\n');
}
