#include "main.h"

/**
 * print_alphabet_x10 - a program that prints lower case
 * alphabet 10 times
 *
 * Return: success (0)
 */

void print_alphabet_x10(void)
{
	char s;
	char t;

	for (s = 0; s <= 9; s++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			putchar(t);
		}
		_putchar('\n');
	}
}
