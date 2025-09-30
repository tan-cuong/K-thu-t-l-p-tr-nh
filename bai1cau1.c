#include <stdio.h>
#include <string.h>
int main(){
    char tenmathang[100];
    float trongluong, dongia;
    char machatluong[10];
    int soluong;
    printf("Nhap Ten mat hang: ");
    gets(tenmathang); fflush(stdin);
    printf("Nhap Trong luong (kg): ");
    scanf("%f", &trongluong);
    printf("Nhap Don gia (VND): ");
    scanf("%f", &dongia);
    printf("Nhap Ma chat luong: ");
    gets(machatluong); fflush(stdin);
    printf("Nhap So luong: ");
    scanf("%d", &soluong);
    printf("Ten mat hang: %s\n", tenmathang);
    printf("Trong luong: %.2f kg\n", trongluong);
    printf("Don gia: %.f\n", dongia);
    printf("Ma chat luong: %s\n",machatluong);
    printf("So luong: %d\n", soluong);
    return 0;
}
