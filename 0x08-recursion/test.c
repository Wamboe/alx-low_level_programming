#include <stdio.h>
#include <string.h>

int main()
{
    int x = 1, y = 2, z[10], *ip;
    ip = &x;
    char *c = "Sheila";

    printf("x:%d y:%d ", x,y);
    printf("*ip:%d ip:%p", *ip, ip);

    printf("\n");

    y = *ip;
    printf("x:%d y:%d ", x,y);

    printf("\n");

    *ip = 0;
    printf("x:%d y:%d ", x,y);
    printf("*ip:%d ip:%p", *ip, ip);

    printf("\n");

    ip = &z[0];
    printf("*ip:%d ip:%p", *ip, ip);

    printf("\n");

    printf("%lu", strlen(c));

    printf("\n");

    printf("%lu", sizeof(c));

    printf("\n");
    printf("%d", 7/2);

}