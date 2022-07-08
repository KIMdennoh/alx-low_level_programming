#include<stdio.h>
/**
 * main - fizz buzz program
 *
 * Return:zero
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("Buzz\n");
	return (0);
}
