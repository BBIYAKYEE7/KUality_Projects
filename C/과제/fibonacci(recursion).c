#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n;
    printf("Enter a number (n ≤ 100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Please enter a number between 0 and 100.\n");
        return 1;
    }

    printf("Fibonacci number at position %d (recursive): %d\n", n, fibonacci_recursive(n));
    return 0;
}