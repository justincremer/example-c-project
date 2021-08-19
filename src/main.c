#include <stdio.h>
#include "fact.h"

int main(void)
{
    int nums[] = {10, -11, 7, 14, -1, -16, -12, 2};
    const int len = (int)(sizeof nums / sizeof nums[0]);
    for (int i = 0; i < len; i++)
    {
        const int n = nums[i];
        printf("%d! = %d\n", n, fact(n));
    }
    return 0;
}
