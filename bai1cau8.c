#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int laSNT = 1;
	printf("Nhap so nguyen to n: "); scanf("%d",&n);
	if ( n<2){
		laSNT = 0;
	}else{
		laSNT = 1;
	for ( int i = 2; i<= sqrt(n); i++){
		if (n % i == 0) {
			laSNT = 0;
				break;
			}
		}
	}
	if (laSNT){
		printf("%d la so nguyen to.",n);
	}else{
		printf("%d khong phai la so nguyen to.",n);
	}
	return 0;
}
