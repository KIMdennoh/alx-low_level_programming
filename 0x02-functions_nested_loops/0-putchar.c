#include<stdio.h>
#include"main.h"
/**
 * main-entry point
 *
 * Return:zero
 */
int main(void)
{
	_putchar();
	return (0);
}

void _putchar(void)
{
	int a, sms[9]={95,112,117,116,99,104,97,114};

	for (a = 0; a < 9; a++)
	{
		putchar(sms[a]);
	}
	putchar('\n');
}
