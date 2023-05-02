#include <stdio.h>

/**
 * main - learning pointers
 * Return: always 0
 */

int main(void)
{
	int i = 8;
	int *p = &i;

	printf("%d\n", *p);
	printf("%d\n", i);
	printf("%p\n", p);
	printf("%p\n", &i);
/*Changing the variable of the pointer*/
	*p = 25;
	printf("%d\n", *p);
	printf("%d\n", i);
	printf("%p\n", p);
	printf("%p\n", &i);

	return (0);
}
