#include <stdio.h>
#include <string.h>

int main(void) {
    char *a = "Hello World"; // 포인터에 해당하는 문자열(문자열 리터럴, 컴파일러가 알아서 메모리 주소 결정)의 주소 넣기
    printf("%s\n", a); // Hello World

    char b[100];
    gets(b); // scanf는 공백을 만날때까지, gets는 공백까지 포함하여 한줄을 입력받음
    printf("%s\n", b); 

    //char c[100];
    //gets_s(c, sizeof(c)); //gets는 버퍼의 크기를 벗어나도 입력을 받음. c11부터 버퍼의 크기를 지키는 gets_s 추가됨
    //printf("%s\n", c);
    // gcc 컴파일러에선 아직 지원안하는 함수

    // string.h에 포함된 문자열 처리 함수
    // strlen(): 문자열 길이 반환
    // strcmp(): 문자열1이 문자열2보다 사전적으로 앞에 있으면 -1, 뒤에 있으면 1 반환
    // strcpy(): 문자열 복사
    // strcat(): 문자열 1에 문자열 2 더함
    // strstr(): 문자열1에 문자열2가 어떻게 포함되어있는지 반환
    char c[20] = "My Name";
    char d[20] = "Youngwook Jeon";
    strcpy(c, d);
    printf("복사된 문자열: %s\n", c); // Youngwook Jeon

    char e[20] = "I like you";
    char f[20] = "like";
    printf("찾은 문자열: %s\n", strstr(e, f)); // like you (찾은 이후 모든 문자열이 반환됨)
    return 0;
}