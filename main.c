#include <stdio.h>
#include <time.h>

#include "fibonacci.h"

int main() {
    original_provider  = fibonacci;
    fibonacci_provider = fibonacci;

    int n              = 30;
    clock_t start      = clock();
    long result1       = fibonacci(n);
    double time1       = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("Regular fibonacci(%d) = %ld (%.6f seconds)\n", n, result1, time1);

    fibonacci_provider = cache;

    start              = clock();
    long result2       = fibonacci(n);
    double time2       = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("Memoized fibonacci(%d) = %ld (%.6f seconds)\n", n, result2, time2);

    return 0;
}
