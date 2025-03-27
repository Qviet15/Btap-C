#include <stdio.h>
int main(){
    float n;
    printf("Nhap vao so diem: ");
    scanf("%f",&n);
    if(n>=0 && n<=10){
        if(n<5) printf("Yeu");
        else if(n<7) printf("Trung binh");
        else if(n<8) printf("Kha");
        else if(n<9) printf("Gioi");
        else printf("Xuat sac");
    }
    else printf("Diem so khong hop le!!");
}
