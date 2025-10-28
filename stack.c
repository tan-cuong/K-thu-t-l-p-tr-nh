#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 10
typedef struct{
    int data[MAX_SIZE];
    int top;
}Stack;
void initializeStack(Stack *s){
    s->top=-1;
}
bool isStackEmpty(Stack *s){
    return s->top==-1;
}
bool isStackFull(Stack *s){
    return s->top==MAX_SIZE-1;
}
void push(Stack *s, int value){
    if(isStackFull(s)){
        printf("Loi: StackOverflow!\n");
        return;
    }
    s->top++;
    s->data[s->top]=value;
    printf("Stack: Pushed %d\n", value);
}
int pop(Stack *s){
    if(isStackEmpty(s)){
        printf("Loi: Stack Underflow!\n");
        return -1;
    }
    int value=s->data[s->top];
    s->top--;
    return value;
}
void testStack(){
    Stack s;
    initializeStack(&s);
    printf("\n--Kiem thu STACK (LIFO) --\n");
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("Stack: Pop 1: %d\n", pop(&s));
    printf("Stack: Pop 2: %d\n", pop(&s));
}
main(){
    testStack();
    return 0;
}
