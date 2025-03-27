#include <stdio.h>
#include <math.h>

int main(){
	int x , y ,z;
	printf("Nhap vao ngay (dd): \n");
	scanf("%d" , &x);
	printf("Nhap vao thang (mm): \n");
	scanf("%d" , &y);
	printf("Nhap vao nam (yyyy): \n");
	scanf("%d" , &z);
	printf("Hom nay la ngay %d/%d/%d\n " ,x ,y ,z);
	return 0;
}

