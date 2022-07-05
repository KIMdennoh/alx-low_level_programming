/**
 * message - to display the output of _putchar
 *
 * Return: void
 */
void message(void);
void print_lowercase();

void print_lowercase()
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
