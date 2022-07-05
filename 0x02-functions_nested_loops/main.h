/**
 * message - to display the output of _putchar
 *
 * Return: void
 */
void message(void);
void print_lowercase();

void print_lowercase()
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
