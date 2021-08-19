#include "fact.h"

int fact(int n)
{
    if (n >= -1 && n <= 1) // -1..1
    {
        return 1;
    }
    else if (n > 0)
    {
        return fact(n - 1) * n;
    }
    else
    {
        return fact(n + 1) * n;
    }
}
