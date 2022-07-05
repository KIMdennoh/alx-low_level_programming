#include<stdio.h>
#include"main.h"
/**
 * main-entry point
 *
 * Return:zero
 */
int main(void)
{
	return (0);
}

void message(void)
{
	int a, sms[9]={95,112,117,116,99,104,97,114};

	for (a = 0; a < 9; a++)
	{
		_putchar(sms[a]);
	}
	_putchar('\n');
}
