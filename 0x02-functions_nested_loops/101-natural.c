#include"main.h"
#include<stdio.h>
/**
 * naturals - see the program
 *
 * Return: alwys zero
 */
void naturals(void)
{
	int x, sum = 0;

	for (x = 3; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
}	
