#include<stdio.h>
#include"main.h"
/**
 * main-entry point
 * message - printing function
 * Return:zero
 */
int main(void)
{
	message();
	return (0);
}

void message(void)
{
	int a;
	char sms[8] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		putchar(sms[a]);
	}
	putchar('\n');
}
