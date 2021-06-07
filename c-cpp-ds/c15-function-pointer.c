#include <stdio.h>

void myFunction() {
    printf("It's my function");
}

void yourFunction() {
    printf("It's your function");
}

int add(int a, int b) {
    return a + b;
}

int(*process(char* a))(int, int) {
    printf("%s\n", a);
    return add;
}

int main(void) {
    // 함수 포인터는 특정한 함수의 반환 자료형을 지정하는 방식으로 선언
    // 반환 자료형(*이름)(매개변수) = 함수명;
    void(*fp)() = myFunction;
    fp();
    fp = yourFunction;
    fp();

    // 함수 포인터를 반환하여 사용
    printf("%d\n", process("10과 20을 더하기")(10, 20));
    return 0;
}