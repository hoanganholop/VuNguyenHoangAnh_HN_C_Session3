#include<stdio.h>

int main(){
	float diemToan;
	float diemVan;
	float diemAnh;
	float tongDiem;
	float diemTrungbinh;
	printf("Nhap diem Toan: ");
	scanf("%f",&diemToan);
	printf("Nhap diem Van: ");
	scanf("%f",&diemVan);
	printf("Nhap diem Anh: ");
	scanf("%f",&diemAnh);
	tongDiem = diemToan+diemVan+diemAnh;
	diemTrungbinh = tongDiem/3;
	printf("Tong diem cua 3 mon la: %.2f\n",tongDiem);
	printf("Diem trung binh cua 3 mon la: %.2f",diemTrungbinh);
	
	
	return 0;
}
