#include <stdio.h>

int fibonacci_iterative(int n) {
    if (n <= 1) {
        return n;
    }

    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int main() {
    int n;
    printf("Enter a number (n ≤ 100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Please enter a number between 0 and 100.\n");
        return 1;
    }

    printf("Fibonacci number at position %d (iterative): %d\n", n, fibonacci_iterative(n));
    return 0;
}