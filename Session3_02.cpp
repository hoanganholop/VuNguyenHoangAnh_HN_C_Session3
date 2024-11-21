#include<stdio.h>

int main(){
	float celsius;
	float fahrenheit;
	printf("Nhap do C : ");
	scanf("%f", &celsius);
	fahrenheit = celsius*9/5 + 32;
	printf("Nhiet do la: %f do F",fahrenheit);
	
	return 0;
}
