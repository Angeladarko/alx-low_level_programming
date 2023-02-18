#include <stdio.h>

/**
 * main - print negative or positive
 *
 * Return: print negative or positive
 */
int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
		if (alp == 'c' || alp == 'y' || alp == 'o')
			continue;
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
