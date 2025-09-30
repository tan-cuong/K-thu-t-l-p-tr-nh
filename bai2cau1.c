#include <stdio.h>
#include <math.h>
int kiemtratamgiac(float a, float b, float c){
    if(a + b > c && a + c > b && b + c > a){
        return 1;
    }
    return 0;
}

void phanloaitamgiac(float a,float b,float c){
    if(a == b && b == c){
        printf("Tam giac deu\n");
        return;
    }
    int vuong = (fabs(a*a + b*b - c*c) < 1e-6 ||
                 fabs(a*a + c*c - b*b) < 1e-6 ||
                 fabs(b*b + c*c - a*a) < 1e-6);
    int can = (a == b || a == c || b == c);
    if(vuong && can){
        printf("Tam giac vuong can\n");
    }else if(vuong){
        printf("Tam giac vuong\n");
    }else if(can){
        printf("Tam giac can\n");
    }else{
        printf("Tam giac thuong\n");
    }
}
double dientich(float a,float b,float c){
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
    float a,b,c;
    printf("Nhap do dai canh a: ");scanf("%f",&a);
    printf("Nhap do dai canh b: ");scanf("%f",&b);
    printf("Nhap do dai canh c: ");scanf("%f",&c);
    if(kiemtratamgiac(a, b, c) == 1){
        printf("3 so %.2f, %.2f, %.2f tao thanh 1 tam giac\n",a,b,c);
        phanloaitamgiac(a, b, c);
        printf("Dien tich tam giac la: %.2lf\n",dientich(a, b, c));
    }else{
        printf("3 so thuc %f, %f, %f khong tao thanh tam giac\n",a,b,c);
    }
    return 0;
}
