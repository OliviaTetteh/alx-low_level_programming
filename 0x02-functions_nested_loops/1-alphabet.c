#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * Return: Always 0 (success)
 * Description: function that prints the alphabet in lowercase
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z';
i++)
_putchar(i);
_putchar('\n');
}
