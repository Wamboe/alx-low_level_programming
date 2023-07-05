#include <stdio.h>

int main()
{
    int x = 1, y = 2, z[10], *ip;
    ip = &x;

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
}