#include <stdio.h>
int main(){
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d",&n);
    float sum = 0;
    for(int i = 1;i<=n;i++){
        sum += 1.0/i;
    }
    printf("%f",sum);
}
