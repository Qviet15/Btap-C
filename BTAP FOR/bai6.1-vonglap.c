#include <stdio.h>
int ucln(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b ;
        a = temp;

    }
    return a;
}
int bcnn(int a, int b,int ucln){
    return (a*b)/ucln;
}
int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    int uc = ucln(a, b);
    int bc = bcnn(a, b, ucln(a,b));
    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", a, b, uc);
    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n", a, b, bc);
    return 0;
}
