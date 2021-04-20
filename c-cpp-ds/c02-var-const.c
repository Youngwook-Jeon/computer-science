#include <stdio.h>

int a; //정적 변수로 선언 -> 기본적으로 0

int main(void) {
    printf("Hello world\n");
    printf("The number is %d.\n", a);
    system("pause");
    return 0;
}