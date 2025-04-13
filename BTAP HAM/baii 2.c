#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long giai_thua(int n)
{
    long long gt=1;
    if(n==0||n==1){
        return 1;
    }
    else{
        gt=n*giai_thua(n-1);
    }

    return gt;
}
int main() {
    int n;
    printf("Nhap vao so nguyen duong n: \n");
    scanf("%d",&n);
    long long gt=giai_thua(n);
    printf("%d! = %lld",n,gt);
    return 0;
}
