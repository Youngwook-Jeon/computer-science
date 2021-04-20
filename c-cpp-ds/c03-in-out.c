#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("입력한 숫자는 %d입니다.\n", a);

    // int => %d
    // long long => %lld
    // double => input: %lf, output: %f
    // float => %f
    // string => %s
    // char => %c
    // %자체를 문자로 출력하려면 %% 사용

    double b;
    scanf("%lf", &b);
    printf("%.2f\n", b); // 소숫점 3번째 자리에서 반올림하여 2번째 자리까지 표시

    // 한자리씩 끊어서 입력받기
    int c, d, e;
    scanf("%1d%1d%1d", &c, &d, &e); // 123
    printf("%d %d %d\n", c, d, e); // 1 2 3
    return 0;
}