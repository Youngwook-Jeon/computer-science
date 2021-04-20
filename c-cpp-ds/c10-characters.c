#include <stdio.h>

int main(void) {
    char a = 65;
    printf("%c\n", a); //A

    char b = getchar(); // 단 하나의 문자를 입력받는 함수
    printf("%c\n", b);

    int c; char d;
    scanf("%d", &c);
    printf("%d\n", c);
    int temp;
    // 한자씩 받아서 파일의 끝 or 개행 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비우기
    while ((temp = getchar()) != EOF && temp != '\n') {}
    scanf("%c", &d);
    printf("%c\n", d);

    return 0;
}