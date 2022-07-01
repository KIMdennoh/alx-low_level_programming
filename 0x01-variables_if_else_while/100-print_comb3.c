#include<stdio.h>
int main(void)
{
	int x, count;

	for (x = 1; x < 100; x++)
	{
		if (x % 10 == 0)
		{
			count++;
		}
		
		if (x % 10 == count)
		{
			continue;
		}
		if (x < 100)
		{
			putchar('0');
			putchar('0' + x);
			putchar(',');
			putchar(' ');
			continue;
		}
//		else
//		{
//			putchar('0' + x);
//			putchar(',');
//			putchar(' ');
//		}
	}
	return (0);
}
