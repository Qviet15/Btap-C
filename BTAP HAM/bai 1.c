#include <stdio.h>
#include <math.h>

double mu(double x, double y){
    return pow(x,y);
}
int main(){
    double x,y;
    printf("Nhap vao co so x: \n");
    scanf("%lf", &x);
    printf("Nhap vao so mu y: \n");
    scanf("%lf", &y);
    mu(x,y);
    printf("Gia tri cua %.2lf mu %.2lf la: %.2lf",x ,y, mu(x,y));
    return 0;
}
