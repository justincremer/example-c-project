#include <stdio.h>
#include "math.h"

int main(void)
{
    const int nums[] = {10, -11, 7, 14, -1, -16, -12, 2};
    const int len = (int)(sizeof nums / sizeof nums[0]);
    for (int i = 0; i < len; i++)
    {
        const int n = nums[i];
        printf("%d! = %d\n", n, fact(n));
    }

    const int n = 6;
    const int p = 6;
    printf("%d^%d = %d\n", n, p, power(n, p));
    return 0;
}
