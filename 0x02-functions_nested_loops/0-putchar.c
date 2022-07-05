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
	char sms[8]={'_','p','u','t','c','h','a','r'};

	for (a = 0; a < 8; a++)
	{
		putchar(sms[a]);
	}
	putchar('\n');
}
