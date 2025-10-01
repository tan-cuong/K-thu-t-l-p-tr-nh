#include<stdio.h>
void tinhtien(long long gia, long long tienvao){
    long long tienthua=tienvao-gia;
    long long conlai=tienthua;
    long long t1=0;
    long long t5=0;
    long long t10=0;
    t1=conlai%5;
    conlai=conlai-t1;
    t5=(conlai/5)%2;
    conlai=conlai-(t5*5);
    t10=conlai/10;
    printf("%lld=%lld * 10 + %lld * 5 + %lld * 1\n",tienthua,t10,t5,t1);
}
main(){
    long long x, y;
    printf("Nhap gia tien: "); scanf("%lld",&x);
    printf("Nhap so tien dua vao: "); scanf("%lld",&y);
    tinhtien(x,y);
    return 0;
}
