#include<stdio.h>
/**
 * main - entry for program
 *
 * Return: zero for success
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i < k && k < j)
				{
					putchar(i);
					putchar(k);
					putchar(j);
					if (i + j + k == 168)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}