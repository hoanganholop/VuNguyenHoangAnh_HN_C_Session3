#include <stdio.h>

int main() {
    
    float side; 
    float height;
    
    printf("Nhap chieu dai canh tam giac: ");
    scanf("%f", &side);
	printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);     

    float area;
	area = side*height/2; 
	printf("Dien tich hinh tam giac la: %.2f\n", area);  

    return 0;
}

