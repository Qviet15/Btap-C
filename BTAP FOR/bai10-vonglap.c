#include <stdio.h>
int fibonaci1(int n){
if(n == 0) return 0;
else if(n == 1) return 1;
else return fibonaci1(n-1) + fibonaci1(n-2);
}
int fibonaci2(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    int a = 0 , b = 1 , c;
    for(int i = 2;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    int n;
    printf("Nhap vao so n :");
    scanf("%d",&n);
    printf("So fibonaci thu %d la: %d",n,fibonaci1(n));
}
