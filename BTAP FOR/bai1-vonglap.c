#include <stdio.h>
int main(){
    int n;
    int sum = 0;
   for(int i = 1;i<=10;i++){
    printf("Nhap va so nguyen n: ");
    scanf("%d",&n);
    sum +=n;
   }
    printf("%d",sum);
}
