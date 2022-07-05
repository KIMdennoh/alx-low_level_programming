/**
 * message - to display the output of _putchar
 *
 * Return: void
 */
void message(void);
void print_alphabets(void);

/**
 * print_alphabets - write in lowercase
 *
 * Returns:void data
 */
void print_alphabets(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
