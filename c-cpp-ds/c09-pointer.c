#include <stdio.h>

int main(void) {
    int a = 5;
    int *b = &a;
    printf("%d\n", *b); // 5

    int c[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", &c[i]);
    }

    int **d = &b;
    printf("%d\n", **d);

    // 배열과 포인터는 사실 내부적으로 같음
    // 배열을 선언한 이후에는 그 이름 자체가 포인터 변수와 동일함
    int *e = c;
    printf("%d\n", e[2]);
    return 0;
}