#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: No return.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit of each row */

		for (column = 1; column <= 9; column++)
		{
			_putchar(','); /* Print separator */
			_putchar(' ');

			product = row * column;

			/* Print the product with proper formatting */
			if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}
}

