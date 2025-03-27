#include <stdio.h>
#include <math.h>
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0) return 0;
    }
     return n > 1;
}
int main(){
    int n;
    for(int i = 0;i<50;i++){
            printf("Nhap vao so nguyen n: ");
        scanf("%d",&n);
    if(nt(n)) printf("So %d la nt\n",n);
    else printf("So %d ko  phai snt\n ",n);
    }
    return 0;
}
