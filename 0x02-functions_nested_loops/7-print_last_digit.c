include "main.h"
/**
 * print_last_digits - Prints the last digit of a number
 * @n: The last number to be treated
 * Return: Value of the last digit of number
 */
int print_last_digits(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -;
	}
	_putchar(last + '0');
	return (last);
}

