#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
};

int main(void) {
    // 구조체 정의 시 앞에 typedef 키워드 사용하면 선언 할 때struct 키워드 붙이지 않아도 됌
    struct Student s;
    strcpy(s.studentId, "20101122");
    strcpy(s.name, "홍길동");
    s.grade = 4;
    strcpy(s.major, "수학과");
    struct Student s2 = { "20112233", "김서울", 3, "컴퓨터공학과" };
    printf("학번: %s\n", s.studentId);
    printf("이름: %s\n", s.name);
    printf("두번째 학생 이름: %s\n", s2.name);

    // 구조체가 포인터 변수로 사용될 때 -> 표시를 사용
    struct Student *s3 = malloc(sizeof(struct Student));
    strcpy(s3->studentId, "20132233");
    printf("세번째 학생 학번: %s\n", s3->studentId);
    return 0;
}