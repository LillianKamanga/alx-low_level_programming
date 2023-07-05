#include <stdio.h>
#include "main.h"
/**
 * main - contains main code for fizz buzz
 * @x: the integer values to be printed
 * Return: void
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
		printf("%s", "FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
		printf("%s", "Buzz ");
		}
		else if (x % 3 == 0)
		{
		printf("%s", "Fizz ");
		}
		else
		{
		printf("%i ", x);
		}
	}
	return (0);
}
