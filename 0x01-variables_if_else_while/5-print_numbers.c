#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = '0';

	while (c <= '10')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
