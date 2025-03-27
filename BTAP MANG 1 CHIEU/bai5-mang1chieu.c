#include <stdio.h>
int main(){
    int n;
    int a[100];
    int x;
    int cnt = 0;
    printf("nhap vao bien x: ");
    scanf("%d",&x);
    printf("nhap vao so gia tri cua mang:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("nhap vao phan tu thu %d: ",i + 1);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cnt++;
        }
    }
    if(cnt>0){
        printf("so lan lap lai cua x la %d: ",cnt);
    }
    else printf("khong co lan nao x xuat hien trong mang");
        return 0;
}
