#include <stdio.h>

int main(){
    int num, count = 0;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("양의 정수를 입력해야 합니다.\n");
        return 1;
    }

    printf("%d의 약수: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n약수의 갯수: %d\n", count);
}