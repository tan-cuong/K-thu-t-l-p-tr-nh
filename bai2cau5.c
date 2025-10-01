#include <stdio.h>
double tinhgiaithua(int n){
    double gt = 1;
    for(int i = n; i > 1; i-=2){
        gt=gt*i;
    }
    return gt;
}
int main() {
    int n;
    printf("Nhap n: ");scanf("%d",&n);
    printf("Giai thua cach cua %d la: %.0lf\n",n,tinhgiaithua(n));
    return 0;
}
