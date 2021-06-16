#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[20];
    int score;
} Student;

int main(void) {
    // char s[20] = "Hello World";
    // FILE *fp;
    // fp = fopen("temp.txt", "w");
    // fprintf(fp, "%s\n", s);
    // fclose(fp);
    int n, sum = 0;
    FILE *fp;
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &n);
    Student *students = (Student*)malloc(sizeof(Student) * n);
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
        printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score);
    }
    free(students);
    fclose(fp);
    return 0;
}