#include "fact.h"

int fact(int n)
{
    if (n > 1)
        return fact(n - 1) * n;
    if (n < -1)
        return fact(n + 1) * n;
    return 1;
}
