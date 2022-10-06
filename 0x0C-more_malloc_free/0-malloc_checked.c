#include <main.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: number of memory
 * Return: returns pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
if (p == NULL)
{
	exit(98);
}
return (p);
}

