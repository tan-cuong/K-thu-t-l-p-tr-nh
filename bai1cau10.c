#include <stdio.h>
#include <math.h>
int main() {
	float tiencan,laisuat;
	int thang;
	printf("Nhap so tien can co: ");
	scanf("%f",&tiencan);
	printf("Nhap so lai suat: ");
	scanf("%f",&laisuat);
	printf("Nhap so thang: ");
	scanf("%d",&thang);
	for (int i = 1; i <= thang; i++) {
        tiencan = sqrt(tiencan *(1 + laisuat));
    }
		printf("So tien can co: %f",tiencan);
		return 0;
}
