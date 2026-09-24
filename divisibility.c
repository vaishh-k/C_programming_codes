#include <stdio.h>

// Function declaration
int test(int n);

int main(void) {
    // Test cases and printing results
    printf("%d\n", test(3));  // Expected output: 1
    printf("%d\n", test(14)); // Expected output: 1
    printf("%d\n", test(12)); // Expected output: 1
    printf("%d\n", test(37)); // Expected output: 0

    return 0;
}

// Function definition
// Returns 1 (true) if n is divisible by 3 or 7, otherwise returns 0 (false)
int test(int n) {
    return (n % 3 == 0) || (n % 7 == 0);
}
