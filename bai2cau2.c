#include <stdio.h>
#include <string.h>
void tinhdiem(float diem,float *d4,char dchu[]){
    if(diem>=9.0){
        *d4=4.0;
        strcpy(dchu, "A+");
    }else if (diem>=8.0){
        *d4=3.5;
        strcpy(dchu, "A");
    }else if (diem>=7.0){
        *d4=3.0;
        strcpy(dchu, "B+");
    }else if (diem>=6.0){
        *d4=2.5;
        strcpy(dchu, "B");
    }else if (diem>=5.0){
        *d4=2.0;
        strcpy(dchu, "C");
    }else if (diem>=4.0){
        *d4=1.5;
        strcpy(dchu, "D");
    }else{
        *d4=1.0;
        strcpy(dchu, "F");
    }
}
void indiem(float diem,float d4,char dchu[]){
    printf("Diem he 10: %.2f\n",diem);
    printf("Diem he 4: %.2f\n",d4);
    printf("Diem chu: %s\n",dchu);
}
int main() {
    float diem;
    float d4 = 0.0;
    char dchu[40];
    printf("Nhap diem: ");scanf("%f",&diem);
    tinhdiem(diem, &d4, dchu);
    indiem(diem, d4, dchu);
    return 0;
}
