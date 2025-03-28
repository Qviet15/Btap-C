#include <stdio.h>
int main(){
    int a,b,c;
    printf("Nhap vao ngay (dd):");
    scanf("%d", &a);
    printf("Nhap vao thang (mm):");
    scanf("%d", &b);
    printf("Nhap vao nam (yy):");
    scanf("%d", &c);
    printf("Hom nay la ngay %d/%d/%d ", a ,b ,c);
    return 0;
}
