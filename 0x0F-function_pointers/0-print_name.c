/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function passed to printname fxn
 * Return: n/a
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *) = f;

	p(name);
}
