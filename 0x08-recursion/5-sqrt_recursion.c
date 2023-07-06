#include "main.h"

int _sqrt_recursion(int n)
{
    int h, l, r;

    if (n < 0)
    {
        return(-1);
    }

    if (n == 1)
    {
        return(1);
    }

    h = n;
    l = n / 2;

    if ((l * l) > n)
    {
        _sqrt_recursion(l);
    }
    else if ((l * l)< n)
    {
        for(;h>l;h--)
        {
            if ((h * h) == n)
            {
                r = h;
                break;
            }

            if ((h * h) < n)
            return (-1);
        }
    }

    return (r);
}
