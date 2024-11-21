#include<stdio.h>

int main(){
	int abcd;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &abcd);
	int a=abcd/1000;
	int b=abcd/100%10;
	int c=abcd/10%10;
	int d=abcd%10;
	int dcba=d*1000+c*100+b*10+a;
	printf("So nghich dao cua so vua nhap la: %d",dcba);
	
	return 0;
} 
