#include <stdio.h>
#include <string.h>
#define Max 100
void daonguocchuoi(char *str){
    if(str == NULL || *str == '\0'){
        return;
    }
    int dodai = strlen(str);
    int batdau = 0;
    int ketthuc = dodai - 1;
    while(batdau < ketthuc){
        char temp = str[batdau];
        str[batdau] = str[ketthuc];
        str[ketthuc] = temp;
        batdau++;
        ketthuc--;
    }
}
int main() {
    char str[Max + 2];
    printf("Nhap chuoi: ");
    scanf("%s",&str);
    str[strcspn(str, "\n")] = 0;
    printf("Chuoi ban dau: '%s'\n",str);
    daonguocchuoi(str);
    printf("Chuoi sau khi bi dao nguoc: '%s'\n",str);
    return 0;
}
