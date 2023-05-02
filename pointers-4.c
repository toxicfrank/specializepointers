#include <stdio.h>

/**
 * main - incrementing a pointer
 * Return: always 0
 */

int main(void)
{
	int x = 5;
	int *p;

	p = &x;

	while(*p < 7)
	{
		printf("%d\n", *p);
/*The brackets are there because we have to dereference the
pointer then increeement the value pointed by the pointer*/
		(*p)++;
	}

	return (0);
}
