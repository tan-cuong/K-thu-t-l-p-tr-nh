#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX_SIZE 100
typedef struct{
    int data[MAX_SIZE];
    int top;
}CharStack;
void initializeStack(CharStack *s){
    s->top=-1;
}
bool isStackEmpty(CharStack *s){
    return s->top==-1;
}
bool isStackFull(CharStack *s){
    return s->top==MAX_SIZE-1;
}
void push(CharStack *s, int value){
    if(isStackFull(s)){
        printf("Loi: StackOverflow!\n");
        return;
    }
    s->top++;
    s->data[s->top]=value;
    printf("Stack: Pushed %d\n", value);
}
int pop(CharStack *s){
    if(isStackEmpty(s)){
        printf("Loi: Stack Underflow!\n");
        return -1;
    }
    int value=s->data[s->top];
    s->top--;
    return value;
}
void reverseString(char *str){
    int len = strlen(str);
    CharStack s;
    initializeStack(&s);
    for(int i=0; i< len; i++){
        push(&s, str[i]);
    }
    for (int i=0; i<len; i++){
        str[i]=pop(&s);
    }
}
int main(){
    char myString[]="LAP TRINH C";
    printf("Chuoi goc: %s\n", myString);
    reverseString(myString);
    printf("Chuoi sau khi dao nguoc: %s\n", myString);
    return 0;
}
