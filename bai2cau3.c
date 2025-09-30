#include <stdio.h>
int tiendien(int cstrc, int cssau){
    int soluong = cssau - cstrc;
    float dongia;
    if(soluong<=100){
        dongia=soluong*1418;
    }else{
        if(soluong<=150){
            dongia=100*1418+(soluong-100)*1622;
        }else{
            if(soluong<=200){
                dongia=100*1418+50*1622+(soluong-150)*2044;
            }else{
                if(soluong<=300){
                    dongia=100*1418+50*1622+50*2044+(soluong-200)*2210;
                }else{
                    if(soluong<=400){
                        dongia = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + (soluong - 300)*2361;
                    }else{
                        dongia = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + 100* 2361 + (soluong - 400)*2420;
                    }
                }
            }
        }
    }
    return dongia;
}
int main() {
    int cstrc, cssau;
    printf("Chi so dien cu: "); scanf("%d",&cstrc);
    printf("Chi so dien moi: "); scanf("%d",&cssau);
    float dongia=tiendien(cstrc,cssau);
    printf("Tien dien: %f\n",dongia);
    return 0;
}
