#include <stdio.h>
int sothangcan(double tiengui,double tiencan,double laisuat){
    int sothang=0;
    while(tiengui<tiencan){
        tiengui = tiengui + tiengui*laisuat/100;
        sothang++;
    }
    return sothang;
}
int main() {
    double tiengui,tiencan,laisuat;
    printf("Nhap so tien gui: ");scanf("%lf",&tiengui);
    printf("Nhap so tien can: ");scanf("%lf",&tiencan);
    printf("Nhap lai suat: ");scanf("%lf",&laisuat);
    int ketqua=sothangcan(tiengui, tiencan, laisuat);
    printf("De nhan duoc so tien %.0lf tu %.0lf ban dau voi lai suat %.2lf thi can it nhat %d thang\n",tiencan,tiengui,laisuat,ketqua);
    return 0;
}
