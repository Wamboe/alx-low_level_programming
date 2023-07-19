#include "3-calc.h"

struct op new_op(char *op, int (*f)(int, int))
{
    struct op_t *optn;
    optn->op = op;
    optn->f = f;
    return optn;
}

int (*get_op_func(char *s))(int, int)
{
    struct op_t *optn;
    optn[0] = new_op("+", op_add);
    optn[1] = new_op("-", op_sub);
    optn[2] = new_op("*", op_mul);
    optn[3] = new_op("/", op_div);
    optn[4] = new_op("%", op_mod);

    while (s != *optn)
    {
        optn++;
    }

    return (optn(a,b));
}
