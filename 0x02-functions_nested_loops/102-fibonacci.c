#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count, fib1 = 1, fib2 = 2, next;

	printf("%d, %d", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		next = fib1 + fib2;
		printf(", %d", next);

		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return 0;
}

