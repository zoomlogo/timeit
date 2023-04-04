#include <stdio.h>
#include "timeit.h"

void fun(void) {
    /* takes a lot of time */
    double sum = 0;
    for (int i = 0; i < 3000; i++)
        sum += 4.0 * i;
}

int main(void) {
    /* measure time taken averaged for 100 times */
    double t = timeit(fun, 100);
    printf("fun: %fs\n", t);
    return 0;
}
