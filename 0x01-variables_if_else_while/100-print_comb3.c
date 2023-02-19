#include <stdio.h>
/**
 * main - main block
 * Description: function that prints combination of the
 * two digits 0 and 1
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
