#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, ff by a new line except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');

	return (0);
}
