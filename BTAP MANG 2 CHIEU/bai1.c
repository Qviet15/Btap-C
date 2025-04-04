#include <stdio.h>
 int main (){
     int a[10][10];
     int n,m;
     printf("Nhap so hang(n) : \n");
     scanf("%d", &n);
     printf("Nhap vao so cot(m) : \n");
     scanf("%d", &m);
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
     }
     printf("Ma tran sau khi nhap la: \n");
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
     }

 }
