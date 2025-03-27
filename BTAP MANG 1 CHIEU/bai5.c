#include <stdio.h>
int main(){
    int n;
    int a[n];
    printf("nhap vao so gia tri cua mang:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap vao gia tri thu %d:", i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            a[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
