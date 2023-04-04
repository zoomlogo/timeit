#include <time.h>
#include "timeit.h"

double timeit(void (*f)(void), unsigned n) {
    clock_t start, end;
    double time = 0;
    for (int i = 0; i < n; i++) {
        start = clock();
        f();
        end = clock();
        time += (end - start) / (double) CLOCKS_PER_SEC;
    }
    return time / n;
}
