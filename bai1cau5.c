#include<stdio.h>
#include<string.h>
main(){
    char hoten[100];
    char dchu[3];
    float d10,d4;
    printf("Nhap ho va ten: "); gets(hoten); fflush(stdin);
    printf("Nhap diem thang 10: "); scanf("%f",&d10);
     if(d10>=9.0){
        d4=4.0;
        strcpy(dchu, "A+");
    }else{
        if (d10>=8.0){
            d4=3.5;
            strcpy(dchu, "A");
        }else{
            if (d10>=7.0){
                d4=3.0;
                strcpy(dchu, "B+");
            }else{
                if (d10>=6.0){
                    d4=2.5;
                    strcpy(dchu, "B");
                }else{
                    if (d10>=5.0){
                        d4=2.0;
                        strcpy(dchu, "C");
                    }else{
                        if (d10>=4.0){
                            d4=1.5;
                            strcpy(dchu, "D");
                        }else{
                            d4=1.0;
                            strcpy(dchu, "F");
                        }
                    }
                }
            }
        }
    }
    printf("Diem thang 4: %.2f\n",d4);
    printf("Diem chu: %s",dchu);
    return 0;
}
