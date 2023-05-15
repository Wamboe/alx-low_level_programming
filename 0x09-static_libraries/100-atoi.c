#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts char into integers];
 * @s: pointer argument
 * Return: n/a
 */
int _atoi(char *s)
{
	int i = 0, cp = 0, cn = 0;
	while (*(s + i) != '\n')
	{
		if (*(s + i) == '+')
			cp++;
		if (*(s + i) == '-')
			cn++;
		if (*(s + i) >= 48 && *(s + i) <= 57)
			break;
		i++;
	}
	printf("\n");
	printf("i: %d\n", i);

	if (*(s + i) == '\0')
		return (0);
	if (cn > cp)
		printf("-");

	while (*(s + i) >= 48 && *(s + i) <= 9 && *(s + i) != '\0')
	{
/*		if (z == NULL)
			z = *(s + i) - 48;
		else			
			z = (z * 10) + (*(s + i) - 48);
*/
		printf("%c", *(s + i));
		i++;
	}

/*	if (cn > cp)
		z = z * -1;
*/
}
