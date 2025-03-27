#include <stdio.h>
int main(){
    int n;
    int giaithua = 1;
    printf("Nhap vao so nguyen n: ");
    scanf("%d",&n);
    if(n == 1 || n ==  0){
        printf("Giai thua cua %d la %d! = %d",n,n,1);

    }
    else {
        for(int i=1;i<=n;i++){
            giaithua *=i;
        }
        printf("Giai thua cua %d la %d! = %d",n,n,giaithua );
    }
}
