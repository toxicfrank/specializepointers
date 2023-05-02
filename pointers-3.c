#include <stdio.h>

/*prototype function*/

int sum(int x, int y);

/**
 * main - playing around with pointers
 * Return: always 0
 */
int main(void)
{
	int result;

/*The "result" stores the integer returned by the function*/

	result = sum(5, 8);

	printf("%d\n", result);

	int *x;

	x = &result;


	printf("%d\n", *x);

	*x = 25;

	printf("%d\n", *x);
	printf("%d\n", result);	

	return (0);
}

/**
 * sum - function that returns the sum
 * @x: first integer
 * @y: second integer
 * Return: sum of x and y
 */

int sum(int x, int y)
{
	return (x + y);
}
