#include<stdio.h>
#include"main.h"
/**
 * print_diagsums - sum of matrix diagonal
 * @a:sum
 * @size: of array
 * Return: zero
 */

void print_diagsums(int *a, int size)
{
	int x = 0, i, y, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		y = size - (x + 1);
		sum = sum + a[y][x];
		sum1 = sum1 + a[x][x];
		x++;
	}
	printf("%d, %d", sum1, sum);
}
