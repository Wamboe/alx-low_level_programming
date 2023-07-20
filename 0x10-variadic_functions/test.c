#include <stdio.h>
#include <string.h>

int main()
{
    int i1 = 1, i2 = 2;
    char *sh = "Sheila";
    char *s= ", ";
    printf("%d%s%d", i1, s, i2);
    printf("\n%lu", sizeof(sh));

    return 0;
}