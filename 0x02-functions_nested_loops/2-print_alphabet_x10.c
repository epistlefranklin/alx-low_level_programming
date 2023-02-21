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

	for (t = 0; t <= 9; t++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
