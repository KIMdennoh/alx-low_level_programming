#include"main.h"
/**
 * more_numbers - 0 - 14 ten times
 *
 * Return:zero
 */
void more_numbers(void)
{
	int x, y, j, k;

	void ten(int l)
	{
		_putchar('0' + l);
	}
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 15; y++)
		{
			j = y / 10;
			k = y % 10;
			if (y < 10)
			{
				ten(y);
			}
			else
			{
				ten(j);
				_putchar('0' + k)
			}
		}
		_putchar('\n');
	}
}
