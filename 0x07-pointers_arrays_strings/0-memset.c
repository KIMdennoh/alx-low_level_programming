#include"main.h"
/**
 * _memset - fill bite 
 * @s:string
 * @b:filler
 * @n:size
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
