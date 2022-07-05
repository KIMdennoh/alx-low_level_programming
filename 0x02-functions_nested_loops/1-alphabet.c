#include<stdio.h>
#include"main.h"
/**
 * main-see program
 *
 * Return:alwys 0
 */
int main(void)
{
	print_alphabets();
	return (0);
}

void print_alphabets(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
