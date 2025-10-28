#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX_SIZE 10
typedef struct {
    char masv[10];
    char ten[100];
    float diemTB;
} SinhVien;
typedef struct {
    SinhVien data[MAX_SIZE];
    int top;
} StackSV;
void initializeStack(StackSV *s) {
    s->top = -1;
}
bool isStackEmpty(StackSV *s) {
    return s->top == -1;
}
bool isStackFull(StackSV *s) {
    return s->top == MAX_SIZE - 1;
}
void pushSV(StackSV *s, SinhVien sv) {
    if (isStackFull(s)) {
        printf("\nLoi: StackOverflow!\n");
        return;
    }
    s->top++;
    s->data[s->top] = sv;
    printf("\nStack: Pushed MaSV: %s, Ten: %s, DTB: %.2f\n", sv.masv, sv.ten, sv.diemTB);
}
SinhVien pop(StackSV *s){
    SinhVien rongSV={"","",0.0};
    if(isStackEmpty(s)){
        printf("Loi: Stack Underflow!\n");
        return rongSV;
    }
    SinhVien sv = s->data[s->top];
    s->top--;
    return sv;
}
main(){
    StackSV s;
    initializeStack(&s);
    SinhVien sv1 = {"001", "Thang", 7.5};
    SinhVien sv2 = {"002", "Kiet", 6.0};
    SinhVien sv3 = {"003", "Dung", 5.2};
    printf("\nThem sinh vien vao STACK\n");
    pushSV(&s, sv1);
    pushSV(&s, sv2);
    pushSV(&s, sv3);
    printf("\nXoa 1 sinh vien khoi STACK\n");
    SinhVien svpop1 = pop(&s);
    printf("Stack: Pop 1: MaSV: %s, Ten: %s, DTB: %.2f\n", svpop1.masv, svpop1.ten, svpop1.diemTB);
    return 0;
}
