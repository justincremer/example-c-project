#include <stdio.h>
#include <string.h>

#include "math.h"

char *fact_test(void) {
    int nums[] = {10, -11, 7, 14, -1, -16, -12, 2},
        len = (int)(sizeof nums / sizeof nums[0]);

    char *buf = "";
    for (int i = 0; i < len; i++) {
        const int n = nums[i];
        sprintf(buf, "%d! = %d\n", n, fact(n));
    }
    return buf;
}

char *power_test(void) {
    int n = 2, p = 8;
    char *buf = "";
    sprintf(buf, "%d^%d = %d\n", n, p, power(n, p));
    return buf;
}

int main(void) {
    printf("%s", fact_test());
    printf("%s", power_test());

    return 0;
}
