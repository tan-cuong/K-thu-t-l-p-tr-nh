#include<stdio.h>
main(){
    float tiengui, laisuat;
    int thang;
    printf("Nhap so tien muon gui: "); scanf("%f",&tiengui);
    printf("Nhap lai suat: "); scanf("%f",&laisuat);
    printf("Nhap so thang muon gui: "); scanf("%d",&thang);
    for(int i=1;i<=thang;i++){
        tiengui=tiengui+tiengui*laisuat/100;
    }
    printf("So tien nhan duoc: %f",tiengui);
    return 0;
}
