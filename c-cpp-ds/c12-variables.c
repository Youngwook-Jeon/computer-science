#include <stdio.h>

void process() {
    static int a = 5; // 정적변수, 프로그램이 실행될 때 data 영역에 할당되고 프로그램이 종료되면 메모리에서 해제됨
    a = a + 1;
    printf("%d\n", a);
}

void add(int *a) {
    *a = (*a) + 10;
}

int main(void) {
    process(); // 6, 불려질 때마다 static int a = 5 구문을 무시하고 진행함
    process(); // 7
    process(); // 8

    // 참조에 의한 전달(주소를 전달)
    int b = 7;
    add(&b);
    printf("%d\n", b); // 17
    return 0;
}