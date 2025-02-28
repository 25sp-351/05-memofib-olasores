#include <stddef.h>

#include "fibonacci.h"

#define CACHE_SIZE 1000
#define NOT_PRESENT -1

static long results[CACHE_SIZE] = {[0 ... CACHE_SIZE - 1] = NOT_PRESENT};

long cache(int n) {
    if (n >= CACHE_SIZE)
        return (*original_provider)(n);

    if (results[n] == NOT_PRESENT)
        results[n] = (*original_provider)(n);
    return results[n];
}
