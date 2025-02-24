#ifndef FIBONACCI_H
#define FIBONACCI_H

typedef long (*long_func_ptr)(int n);

// Function declarations
long fibonacci(int n);
long cache(int n);

// External variables
extern long_func_ptr fibonacci_provider;
extern long_func_ptr original_provider;

#endif // FIBONACCI_H