#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a >= -100 && a <= 100) {
        if (a % 2 == 0) {
            printf("The number is even and ");
        } else {
            printf("The number is odd and ");
        }
        if (a > 0) {
            printf("positive.\n");
        } else if (a < 0) {
            printf("negative.\n");
        } else {
            printf("zero.\n");
        }
    } else {
        printf("Error: The number is out of range (-100 to 100).\n");
    }
    return 0;
}