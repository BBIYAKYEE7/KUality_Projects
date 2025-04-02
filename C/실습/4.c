#include <stdio.h>

int main() {
    int N, sum = 0;
    int current = 1;
    int row = 1;

    printf("정수 N을 입력하세요: ");
    scanf("%d", &N);

    while (current <= N) {
        for (int j = 1; j <= row && current <= N; j++) {
            printf("%d ", current);
            sum += current;
            current++;
        }
        printf("\n");
        row++;
    }

    printf("출력된 숫자의 합: %d\n", sum);

    return 0;
}