#include "fibonacci.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

long_func_ptr fibonacci_provider = NULL;
long_func_ptr original_provider  = NULL;

long fibonacci(int n) {
    if (n < 2)
        return n;
    return (*fibonacci_provider)(n - 1) + (*fibonacci_provider)(n - 2);
}
