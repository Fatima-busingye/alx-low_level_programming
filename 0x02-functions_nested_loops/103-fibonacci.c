#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci terms below 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next, sum = 2;

	while (fib2 <= 4000000)
	{
		next = fib1 + fib2;

		if (next % 2 == 0)
			sum += next;

		fib1 = fib2;
		fib2 = next;
	}

	printf("%ld\n", sum);

	return 0;
}

