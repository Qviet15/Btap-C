#include <stdio.h>

int main(){
    int a[10];
    int n;
    printf("Nhap cac phan tu trong mang: \n");
    for(int i=0; i<10 ;i++){
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu trong mang la: \n");
    for(int i=0; i<10 ;i++){
        printf("%d " , a[i]);
    }
    return 0;
}
