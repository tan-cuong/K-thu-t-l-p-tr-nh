#include<stdio.h>
#include<stdio.h>
main(){
    float tiengui, laisuat, tiennhan;
    int thang=0;
    printf("Nhap so tien muon gui: "); scanf("%f",&tiengui);
    printf("Nhap lai suat: "); scanf("%f",&laisuat);
    printf("Nhap so tien muon nhan: "); scanf("%f",&tiennhan);
    while(tiengui<tiennhan){
        tiengui=tiengui+tiengui*laisuat/100;
        thang++;
    }
    printf("So thang it nhat phai gui: %d",thang);
    return 0;
}
