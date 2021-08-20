#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "math.h"

const int MAX_BUF = 256;

char *fact_test(void) {
    int nums[] = {10, -11, 7, 14, -1, -16, -12, 2},
        len = (int)(sizeof nums / sizeof nums[0]);

    char *buf = (char *)malloc(sizeof(char) * MAX_BUF);
    if (buf == NULL) {
        printf("Error allocating memory\n");
    }

    for (int i = 0; i < len; i++) {
        char *tmp = (char *)malloc(sizeof(char) * 24);
        sprintf(tmp, "%d! = %d\n", nums[i], fact(nums[i]));
        buf += *tmp;
        free(tmp);
    }
    return buf;
}

char *power_test(void) {
    int n = 2, p = 8;
    char *buf = (char *)malloc(sizeof(char) * MAX_BUF);
    if (buf == NULL) {
        printf("Error allocating memory\n");
    }

    sprintf(buf, "%d^%d = %d\n", n, p, power(n, p));
    return buf;
}

int main(void) {
    char *res;

    res = fact_test();
    printf("%s", res);

    res = power_test();
    printf("%s", res);

    free(res);
    return 0;
}
