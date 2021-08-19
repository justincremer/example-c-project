#include "fact.h"

int fact(int n)
{
    if (n > 1)
        return fact(n - 1) * n;
    if (n < -1)
        return fact(n + 1) * n;
    return 1;
}

int power(int n, int p)
{
    for (int i = 0; i < p; i++)
    {
        n *= n;
    }
    return n;
}
