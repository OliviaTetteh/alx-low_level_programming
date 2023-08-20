#include <stdio.h>
#include <math.h>

/**
 * main - This prints the largest prime factor of the number 6128524751
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, n = 6128524751;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
