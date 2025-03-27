#include <stdio.h>
#include <math.h>

int main (){
	float x;
		printf("Nhap vao gia tri x: ");
	scanf("%f", &x);
	printf("Gia tri cua %2.f^2 la: %2.f\n" ,x , x*x);
	printf("Gia tri cua %2.f^3 la: %2.f\n" ,x , x*x*x);
	printf("Gia tri cua %2.f^4 la: %2.f\n" ,x , x*x*x*x);
	
	return 0;
	
}


