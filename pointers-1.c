#include <stdio.h>

/**
 * main - learning alx pointers
 * Return: always 0
 */

int main(void)
{
	int i = 10;
	int *p;

/**
 * "*p" is a pointer to an integer hence meaning that
 * p is used to store an address of an integer data
 * type.
 */

	p = &i;

	printf("%d\n", *p);
	printf("%p\n", p);
	printf("%p\n", &i);
	return (0);
}