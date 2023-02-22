#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the
 * day of Jack Bauer starting from 00:00 to 23:59
 * Description: Using nest while loops, count up through
 * every minute of the day and print
 */
void jack_bauer(void)
{
	int x = 0, y;

	while (x < 24)
	{
		y = 0;
		while (y < 60)
		{
			_putchar(x / 10) + '0';
			_putchar(x % 10) + '0';
			_putchar(':');
			_putchar(y / 10) + '0';
			_putchar(y % 10) + '0';
			_putchar('\n');
			y++;
		}
		x++;
	}
}
