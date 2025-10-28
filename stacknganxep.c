#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
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
void push(Stack *s, char value){
    if(isStackFull(s)){
        printf("Loi: StackOverflow!\n");
        return;
    }
    s->top++;
    s->data[s->top]=value;
    printf("\nStack: Pushed %d\n", value);
}
char pop(Stack *s){
    if(isStackEmpty(s)){
        printf("Loi: Stack Underflow!\n");
        return -1;
    }
    int value=s->data[s->top];
    s->top--;
    return value;
}
bool capkytu (char c1, char c2){
    if(c1=='('&&c2==')'){
        return true;
    }else if(c1=='['&&c2==']'){
        return true;
    }else if(c1=='{'&&c2=='}'){
        return true;
    }else{
        return false;
    }
}
bool check(const char* str){
    Stack s;
    initializeStack(&s);
    int i;
    char popped;
    const int len=strlen(str);
    for(i=0; i<len; i++){
        if(str[i]=='('||str[i]=='['||str[i]=='{'){
            push(&s, str[i]);
        }else if(str[i]==')'||str[i]==']'||str[i]=='}'){
            if(isStackEmpty(&s)){
                return false;
            }
            popped=pop(&s);
            if(!capkytu(popped, str[i])){
                return false;
            }
        }
    }
    return isStackEmpty(&s);
}
main(){
    const char* test[]={"a*(b+c)/{d-[e*f]}", "a/(b+c]"};
    for(int i=0; i<strlen(test); i++){
        if(check(test[i])){
            printf("\nHop le\n");
        }else{
            printf("\nKhong hop le\n");
        }
    }
    return 0;
}
