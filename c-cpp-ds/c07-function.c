#include <stdio.h>

void dice(int input) {
    printf("내가 던진 주사위: %d\n", input);
}

int factorial(int a) {
    if (a == 1) return 1;
    else return a * factorial(a - 1);
}

int main(void) {
    dice(3);
    dice(5);
    dice(1);
    printf("%d\n", factorial(8));
    return 0;
}