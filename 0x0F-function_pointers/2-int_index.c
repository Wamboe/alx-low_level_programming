#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
    int x = 0, rslt = 0;

    if (size <= 0)
        return (-1);
    

    for ( ; x < size; x++)
    {
        rslt =cmp(array[x]);
        if (rslt == 1)
            break;
    }

    if (x == size && rslt == 0)
    {
        return(-1);
    }

    return (x);  
}
