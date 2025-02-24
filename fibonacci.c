#include "fibonacci.h"
#include <stdio.h>
#include <assert.h>
#include <stddef.h>


#define CACHE_SIZE 1000
#define NOT_PRESENT -1

// Global variables
long results[CACHE_SIZE] = {[0 ... CACHE_SIZE-1] = NOT_PRESENT};
long_func_ptr fibonacci_provider = NULL;
long_func_ptr original_provider = NULL;

long cache(int n) {
    if (n >= CACHE_SIZE) {
        return (*original_provider)(n);
    }
    
    if (results[n] == NOT_PRESENT) {
        results[n] = (*original_provider)(n);
    }
    return results[n];
}

long fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    return (*fibonacci_provider)(n-1) + (*fibonacci_provider)(n-2);
}