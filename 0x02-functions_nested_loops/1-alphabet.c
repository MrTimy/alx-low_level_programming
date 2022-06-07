#include "main.h"
/**
 * main - print_alphabet Entry point
 * Description: print_alphabet - prints the alphabet in small caps
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
