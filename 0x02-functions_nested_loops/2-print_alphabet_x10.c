#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char Alp;
	int i;

	i = 0;

	while (i < 10)
	{
		Alp = 'a';
		while (Alp <= 'z')
		{
			_putchar(Alp);
			Alp++;
		}
		_putchar('\n');
		i++;
	}
}
