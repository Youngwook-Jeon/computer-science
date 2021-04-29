#include <stdio.h>

int a[3][3] = {{ 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }};

int main(void) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int b = 10;
    int c[10];
    // c = &b; => 컴파일 에러, c가 수정할 수 없는 lvalue

    // 포인터를 배열처럼 사용할 수 있음
    int d[5] = { 1, 2, 3, 4, 5 };
    int *e = d;
    printf("%d\n", e[2]);
    printf("%d\n", *(e++)); // 1
    printf("%d\n", *(++e)); // 3
    printf("%d\n", *(e + 2)); // 5

    // 포인터는 연산을 통해 자료형의 크기만큼 옮겨짐
    // 즉 정수형 포인터는 4바이트씩 옮겨짐
    for (i = 0; i < 5; i++) {
        printf("%d ", *(d + i));
    }

    int f[2][5] = {{ 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }};
    int (*g)[5] = f; // 좌변 괄호가 없으면 포인터를 여러개 담는 배열이 되므로 의미가 완전히 달라짐
    for (i = 0; i < 5; i++) {
        printf("%d ", g[1][i]); // 6 7 8 9 10
    }

    return 0;
}