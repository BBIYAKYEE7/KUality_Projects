#include <stdio.h>

int main() {
    int a, b, c;
    printf("숫자 3개를 입력해주세요: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }

    if(a == b && b == c) {
        printf("모든 숫자가 같습니다.");
        return 0;
    }
    
    printf("가장 큰 숫자는: %d 입니다.", max);
    return 0;
}