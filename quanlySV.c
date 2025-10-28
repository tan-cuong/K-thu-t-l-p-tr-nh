#include<stdio.h>
#include<string.h>
typedef struct{
	char masv[20];
	char hoten[50];
	int tuoi;
	float dtb;
	char ngaysinh[11];
}SinhVien;
void nhap1sv (SinhVien *sv){
	printf("Nhap ma sinh vien: ");
	fgets(sv->masv, sizeof(sv->masv), stdin);
	sv->masv[strcspn(sv->masv, "\n")]='\0';
	printf("Nhap ho ten: ");
	fgets(sv->hoten, sizeof(sv->hoten), stdin);
	sv->hoten[strcspn(sv->hoten, "\n")]='\0';
	printf("Nhap tuoi: ");
	scanf("%d",&sv->tuoi);
	while(getchar()!='\n');
	printf("Nhap ngay sinh (DD/MM/YYYY): ");
    fgets(sv->ngaysinh, sizeof(sv->ngaysinh), stdin);
    sv->ngaysinh[strcspn(sv->ngaysinh, "\n")]='\0';
	printf("Nhap diem trung binh: ");
	scanf("%f",&sv->dtb);
	while(getchar()!='\n');
}
void nhapds(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap sinh vien thu %d:\n",i+1);
		nhap1sv(&ds[i]);
	}
}
void xuat1sv (SinhVien sv){
	printf("Ma sinh vien: %s\n",sv.masv);
	printf("Ho ten: %s\n",sv.hoten);
	printf("Ngay sinh: %s\n", sv.ngaysinh);
	printf("Tuoi: %d\n",sv.tuoi);
	printf("Diem trung binh: %.2f\n",sv.dtb);
}
void xuatds (SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		printf("Sinh vien thu %d:\n",i+1);
		xuat1sv(ds[i]);
	}
}
void diemtbmax (SinhVien ds[], int n){
	int imax=0;
	for(int i=1;i<n;i++){
		if(ds[i].dtb>ds[imax].dtb){
			imax=i;
		}
	}
	printf("Sinh vien co diem trung binh cao nhat\n");
	printf("Ma sinh vien: %s\n",ds[imax].masv);
	printf("Ho va ten: %s\n",ds[imax].hoten);
	printf("Tuoi: %d\n",ds[imax].tuoi);
	printf("Diem trung binh: %.2f\n",ds[imax].dtb);
}
void sapxep (SinhVien ds[], int n){
	SinhVien temp;
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if(ds[j].dtb<ds[j+1].dtb){
				temp=ds[j];
				ds[j]=ds[j+1];
				ds[j+1]=temp;
			}
		}
	}
}
main(){
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	while(getchar()!='\n');
	SinhVien ds[100];
	nhapds(ds, n);
	printf("Danh sach sinh vien da nhap\n");
	xuatds(ds, n);
	diemtbmax(ds, n);
	sapxep(ds, n);
	printf("Danh sach sinh vien da sap xep giam dan\n");
	xuatds(ds, n);
	return 0;
}
