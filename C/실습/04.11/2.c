#include <stdio.h>

int primeFactorization(int n){
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            printf("%d ", i);
            n /= i;
        } else {
            i++;
        }
    }
    printf("\n");
}

int main(void){
    int input;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &input);

    if(input < 1){
        printf("양의 정수만 입력하세요.\n");
        return 0;
    }
    printf("%d의 소인수 분해: ", input);
    primeFactorization(input);
    return 0;
}