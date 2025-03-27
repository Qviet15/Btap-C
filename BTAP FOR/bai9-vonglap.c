#include <stdio.h>
int giaithua(int n){
    if(n == 0 || n== 1) return 1;
    else return n*giaithua(n-1);
}
int main(){
int n;
printf("Nhap vao so nguyen n:");
scanf("%d",&n);
float sum = 0;
for(int i=1;i<=n;i++){
    int gt = giaithua(i);
    sum += 1.0/gt;
}
printf("%.2f",sum);
}
