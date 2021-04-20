#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("%d\n", (a == b) ? 100 : -100);

    // ~ 부정 비트 연산자
    // ^ XOR
    // << 왼쪽 시프트
    printf("%d\n", 5 << 2); // 20
    printf("%d\n", 9 >> 1); // 4
    return 0;
}