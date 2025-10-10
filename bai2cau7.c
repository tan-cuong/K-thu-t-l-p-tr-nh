#include <stdio.h>
int songuyento(int n){
    if(n <= 1){
        return 0;
    }
    for(int i=2; i*i <= n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int dem(int m, int n){
    int dem=0;
    for(int i = m; i <= n; i++){
        if(songuyento(i)){
            dem++;
        }
    }
    return dem;
}
int main() {
    int khoang1_10 = dem(1, 10);
    printf("So nguyen to trong doan [1, 10]: %d\n",khoang1_10);
    int khoang10_100 = dem(10, 100);
    printf("So nguyen to trong doan [10, 100]: %d\n",khoang10_100);
    int khoang100_1000 = dem(100, 1000);
    printf("So nguyen to trong doan [100, 1000]: %d\n",khoang100_1000);
    return 0;
}
