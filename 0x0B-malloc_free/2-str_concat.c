#include "main.h"
#include <stdlib.h>
#include <limits.h>

char *str_concat(char *s1, char *s2)
{
    char *ch;

    if (s1 == NULL && s2 == NULL)
        return (NULL);

    ch = malloc(sizeof(s1) + sizeof(s2));
    if (ch == NULL)
        return (NULL);

    while (*s1 != '\0')
    {
        _putchar(*s1 + '0');
        *ch = *s1;
        ch++;
        s1++;
    }

    while (*s2 != '\0')
    {
        *ch = *s2;
        ch++;
        s2++;
    }

    *ch = '\0';

    return (ch);
}
