char _putchar(void)
{
	char message[9]={'_','p','u','t','c','h','a','r','\n'};
	int a;

	for (a = 0; a < 9; a++)
	{
		putchar(message[a]);
	}
	return (0);
}
