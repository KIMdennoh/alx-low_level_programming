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
	int a;
	char sms[8]="_putchar";

	for (a = 0; a < 9; a++)
	{
		putchar(sms[a]);
	}
	putchar('\n');
}
