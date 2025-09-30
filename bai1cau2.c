#include<stdio.h>
#include<string.h>
main(){
    char tenkh[100];
    int cstrc, cssau, soluong;
    float dongia;
    printf("Nhap ten khach hang: ");
    gets(tenkh); fflush(stdin);
    printf("Nhap chi so dien cu: ");
    scanf("%d",&cstrc);
    printf("Nhap chi so dien moi: ");
    scanf("%d",&cssau);
    soluong=cssau-cstrc;
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
    printf("Tien dien la: %f",dongia);
    return 0;
}
