#include <stdio.h>
#include <limits.h>

int main(void) {
    int a[6] = { 6, 1, 4, 9, 0, 2};
    int i, max_value = INT_MIN;
    for (i = 0; i < 6; i++) {
        if (max_value < a[i]) max_value = a[i];
    }
    printf("%d\n", max_value);

    char b[20];
    scanf("%s", &b);
    printf("%s\n", b);
    return 0;
}