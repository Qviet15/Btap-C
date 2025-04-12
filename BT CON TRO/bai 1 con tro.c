#include <stdio.h>

void hoandoi(int *x , int *y){
    int temp =*x;
    *x = *y;
    *y = temp;
}
int main(){
    int a , b;
    printf("Nhap vao gia tri cua a: \n");
    scanf("%d", &a);
    printf("Nhap vao gia tri cua b: \n");
    scanf("%d", &b);
    hoandoi(&a,&b);
    printf("Gia tri cua a va b sau khi hoan doi la: %d , %d", a, b);
    return 0;
}
