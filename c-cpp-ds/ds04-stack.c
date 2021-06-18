#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define INF 99999999

// int stack[SIZE];
// int top = -1;

// void push(int data) {
//     if (top == SIZE - 1) {
//         printf("스택의 용량이 가득찼습니다.\n");
//         return;
//     }
//     stack[++top] = data;
// }

// int pop() {
//     if (top == -1) {
//         printf("이미 비어있는 스택입니다.\n");
//         return -INF;
//     }
//     return stack[top--];
// }

// void show() {
//     for (int i = top; i >= 0; i--) {
//         printf("%d\n", stack[i]);
//     }
// }

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Stack {
    Node *top;
} Stack;

void push(Stack *stack, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack) {
    if (stack->top == NULL) {
        printf("이미 비어있는 스택입니다.\n");
        return -INF;
    }
    Node *node = stack->top;
    int data = node->data;
    stack->top = node->next;
    free(node);
    return data;
}

void show(Stack *stack) {
    Node *cur = stack->top;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}

int main(void) {
    Stack stack;
    // push(7);
    // push(1);
    // push(3);
    // push(5);
    // pop();
    // show();
    stack.top = NULL;
    show(&stack);
    push(&stack, 7);
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 6);
    pop(&stack);
    show(&stack);
    return 0;
}
