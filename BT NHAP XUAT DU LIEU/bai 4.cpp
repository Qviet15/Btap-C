#include <stdio.h>
#define PI 3.14159

int main(){
	double x ,V ,S;
	printf("Nhap vao ban kinh hinh cau: ");
	scanf("%lf" ,&x);
	printf("Dien tich hinh cau la %.2lf\n" , S , 4*PI*x*x);
	printf("The tich hinh cau la %.2lf\n", V , (4/3)*PI*x*x*x);
	
	return 0;
}

