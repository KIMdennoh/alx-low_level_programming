#include"main.h"
/**
 * more_numbers - 0 - 14 ten times
 *
 * Return:zero
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10;  x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar('0' + y);
		}
		_putchar('\n');
	}
	_putchar('\n');
}