#include<stdio.h>
main(){
    char hoten[100];
    float dtoan, dvan, dtin;
    float dtb;
    char xeploai[50];
    printf("Nhap ho ten: "); gets(hoten); fflush(stdin);
    printf("Nhap diem toan: "); scanf("%f",&dtoan);
    printf("Nhap diem van: "); scanf("%f",&dvan);
    printf("Nhap diem tin: "); scanf("%f",&dtin);
    dtb=(dtoan+dvan+dtin)/3;
    if (dtb>=8.0){
        strcpy(xeploai,"Gioi");
    }else{
        if(dtb>=7.0){
            strcpy(xeploai,"Kha");
        }else{
            if(dtb>=5.0){
                strcpy(xeploai,"Trung binh");
            }else{
                strcpy(xeploai,"Yeu");
            }
        }
    }
    printf("Diem trung binh: %.2f\n", dtb);
    printf("Xep loai: %s", xeploai);
    return 0;
}
