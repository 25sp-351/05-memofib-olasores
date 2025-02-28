#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo "Running Fibonacci tests..."

# Run the test executable
./test_fibonacci

# Check the exit status
if [ $? -eq 0 ]; then
    echo -e "${GREEN}All tests passed!${NC}"
    exit 0
else
    echo -e "${RED}Tests failed!${NC}"
    exit 1
fi