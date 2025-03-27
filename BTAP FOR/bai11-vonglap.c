#include <stdio.h>
void nhiphan(int n){
    if(n>1){
      nhiphan(n/2);
    }
    printf("%d ",n%2);
}
int main (){
 int n;
 printf("Nhap vao so nguyen duong n:");
 scanf("%d",&n);
 if(n<0){ printf("Hay nhap so nguyen duong ");
    return 0;
 }
 printf("So %d trong he nhi phan la: ",n);
 nhiphan(n);
 printf("\n");
 printf("So %d trong he bat phan (base 8): %o\n", n, n);
    printf("So %d trong he thap luc phan (base 16): %x\n", n, n);
    return 0;
}
