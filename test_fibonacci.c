#include <stdio.h>
#include <assert.h>
#include "fibonacci.h"

void test_basic_cases() {
    assert((*fibonacci_provider)(0) == 0);
    assert((*fibonacci_provider)(1) == 1);
    assert((*fibonacci_provider)(2) == 1);
    assert((*fibonacci_provider)(3) == 2);
    assert((*fibonacci_provider)(4) == 3);
    printf("Basic cases passed!\n");
}

void test_larger_numbers() {
    assert((*fibonacci_provider)(5) == 5);
    assert((*fibonacci_provider)(6) == 8);
    assert((*fibonacci_provider)(7) == 13);
    printf("Larger numbers passed!\n");
}

void test_caching() {
    long first_call = (*fibonacci_provider)(10);
    long second_call = (*fibonacci_provider)(10);
    assert(first_call == second_call);
    assert(first_call == 55);
    printf("Caching test passed!\n");
}

int main() {
    // Setup providers
    original_provider = fibonacci;
    fibonacci_provider = cache;
    
    // Run tests
    test_basic_cases();
    test_larger_numbers();
    test_caching();
    
    printf("All tests passed successfully!\n");
    return 0;
}