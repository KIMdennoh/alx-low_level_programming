#include<stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if (x % 11 == 0)
		{
			continue;
		}
		if (x < 10)
		{
			putchar('0'+ x + ','+' ');
			continue;
		}
		putchar('0' + x);
		putchar(',' + ' ');
	}
	return (0);
}
