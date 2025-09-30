#include <stdio.h>
float tiendien (float tiengui,float laisuat,int thang){
    for(int i=1;i<=thang;i++){
        tiengui=tiengui+tiengui*laisuat/100;
    }
    return tiengui;
}
main(){
    float tiengui, laisuat, dongia;
    int thang;
    printf("Nhap so tien muon gui: "); scanf("%f",&tiengui);
    printf("Nhap lai suat: "); scanf("%f",&laisuat);
    printf("Nhap so thang muon gui: "); scanf("%d",&thang);
    dongia=tiendien(tiengui,laisuat,thang);
    printf("So tien nhan duoc: %f",dongia);
    return 0;
}
