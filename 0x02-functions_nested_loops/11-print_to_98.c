#include"main.h"
/**
 * print_to_98 - see the program
 *@n:starting point for printing to 98
 *return: alwys zero
 */
void print_to_98(int a)
{
	int x;

	if (a < 98)
	{
		for (x = a; x <= 98; x++)
		{
			_putchar('0' + x);
		}
	}
	else if (a > 98)
		for (x = a; x >= 98; x--)
		{
			_putchar('0' + x);
		}
	else
	{
		x = a;
		_putchar('0' + x);
	}
	if (x != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
