#include<stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int a;

	void add()
	{
		putchar(',');
		putchar(' ');
	}
	int print(int a)
	{
		if (a != 0) 
		{
			print(a / 10);
			putchar((a % 10) + '0');
		}
		else
		{
			add();
		}
	}
	for (a = 1; a < 10; a++)
	{
		putchar('0');
		putchar('0' + a);
		if (a == 9)
		{
			continue;
		}
		else
		{
		add();
		}
	}
	for (a = 10; a < 90; a++)
	{
		if (a % 11 == 0)
		{
			continue;
		}
		else
		{
			print(a);
		}
	}
	putchar('\n');
	return (0);
}
