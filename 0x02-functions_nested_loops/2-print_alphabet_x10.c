#include "main.h"

/**
 * print_alphabet_x10 - main.h
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
