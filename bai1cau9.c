#include <stdio.h>
#include <conio.h>
int main(){
	int n;
	printf("Nhap n: ");scanf("%d",&n);
		int gt = 1;
		int i = n;
		if ( i > 1){
		for ( int i = n ; i>1; i=i-2){
		gt = gt * i;
		}
	}
	printf("%d",gt);
return 0;
}
