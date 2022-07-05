/**
 * message - to display the output of _putchar
 *
 * Return: void
 */
void message(void);
void print_alphabet(void);

/**
 * print_alphabet - write in lowercase
 *
 * Returns:void data
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
