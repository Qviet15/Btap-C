#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int tinh_fibonaci(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        int fn=tinh_fibonaci(n-1)+tinh_fibonaci(n-2);
        return fn;
    }
}
int main() {
    int n;
    printf("Nhap vao so nguyen duong n: \n");
    scanf("%d",&n);
    int fn=tinh_fibonaci(n);
    printf("f(%d) trong day fibonaci la: %d",n,fn);
    return 0;
}
