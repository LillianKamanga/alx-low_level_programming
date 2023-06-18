#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - point of execution
 *@void: no parameters accepted
 *Tells you whether a number is negative, positive or zeroe
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int c;

	for (c = 25; c >= 0; c--)
	putchar(48 + c);
	putchar('\n');

return (0);
}
