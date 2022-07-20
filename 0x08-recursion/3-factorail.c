#include"main.h"
/**
 * factorial - prints factorials of a number
 * @n:number of factorials
 * Return: success ? fact:-1(error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (n * factorial(n - 1));
}
