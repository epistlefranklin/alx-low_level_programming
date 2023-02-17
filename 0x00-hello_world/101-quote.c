#include <stdio.h>
#include <unistd.h>
/**
 * main - a c program that prints the string in a put function
 * Description: using the main function
 * Return: (1) success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
