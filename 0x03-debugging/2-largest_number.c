#include "main.h"

/**
* largest_number - This program returns the largest of 3 integers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
{
	if (b > c)
	largest = a;
	else if (a > c)
	largest = a;
	else
	largest = c;

}
else
{
	if (b < c)
	largest = c;
	else
	largest = b;
}
return (largest);
}
