#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a program that prints alphabet
 * in lower case
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
