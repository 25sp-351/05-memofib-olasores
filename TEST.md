# Fibonacci Tests Cases
#### 1. Basic Cases
Tests the fundamental Fibonacci sequence values:
- f(0) = 0
- f(1) = 1
- f(2) = 1
- f(3) = 2
- f(4) = 3

#### 2. Larger Numbers
Verifies correct computation of larger Fibonacci numbers:
- f(5) = 5
- f(6) = 8
- f(7) = 13

#### 3. Caching Verification
Ensures the memoization is working correctly:
- Multiple calls to the same value return identical results
- Verifies specific known value (f(10) = 55)

#### Running the Tests

1. Build the project:
```bash
make clean && make
```

2. Run the test suite:
```bash
./test.sh
```

## Test Infrastructure

- Tests use the standard C `assert` macro for verification
- Each test category is separated into its own function
- The test script provides colored output for pass/fail status
- The Makefile includes a `test` target that runs all tests

## Adding New Tests

To add new tests:
1. Add test functions to `test_fibonacci.c`
2. Update this documentation with new test cases
3. Rebuild and run the test suite

## Known Limitations

- Cache size is limited to 100 elements
- Numbers larger than LONG_MAX will overflow
- No negative number handling implemented