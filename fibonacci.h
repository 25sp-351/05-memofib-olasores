#ifndef FIBONACCI_H
#define FIBONACCI_H

typedef long (*long_func_ptr)(int n);

long fibonacci(int n);
long cache(int n);

extern long_func_ptr fibonacci_provider;
extern long_func_ptr original_provider;

#endif
