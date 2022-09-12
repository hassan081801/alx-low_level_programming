#include <stdio.h>

/**
 * main - print alphabets in lower case and then upper case.
 *
 * Return: always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'A'; alph++)
		puchar(alph);

	putchar('\n');

	return (0);
}
