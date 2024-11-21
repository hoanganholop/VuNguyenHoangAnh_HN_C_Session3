#include<stdio.h>

int main(){
	int abcd;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &abcd);
	int a=abcd/1000;
	int b=abcd/100%10;
	int c=abcd/10%10;
	int d=abcd%10;
	printf("Tong cac chu so trong so vua nhap la: %d",a+b+c+d);
	
	return 0;
} 
