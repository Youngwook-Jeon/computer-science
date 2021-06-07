#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *a = malloc(sizeof(int)); // 동적 메모리 할당을 수행할 때마다 할당되는 포인터의 주소는 변칙적
    printf("%d\n", a);
    free(a); // 동적으로 할당된 메모리 꼭 해제해주기
    a = malloc(sizeof(int));
    printf("%d\n", a);
    free(a);

    // 일괄적인 범위의 메모리를 모두 특정한 값으로 설정하기 위해 memset() 사용
    // memset(포인터, 값, 크기);
    // string.h 에 선언되어있음
    char *b = malloc(100);
    memset(b, 'B', 100);
    for (int i = 0; i < 100; i++) {
        printf("%c ", b[i]);
    }

    int** p = (int**)malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        *(p + i) = (int*)malloc(sizeof(int) * 3);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(p + i) + j) = i * 3 + j;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}