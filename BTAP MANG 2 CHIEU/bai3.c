#include <stdio.h>

void nhap(int a[50][50], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void tich(int a[50][50], int b[50][50], int c[50][50], int n, int p, int m){
    for(int i=0; i<n ; i++){
        for( int j=0; j<m ; j++){
            for(int k=0; k<p ; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
 }
 int main(){
     int n, m, p, a[50][50] , b[50][50], c[50][50];
     printf("Nhap vao so hang cua ma tran 1 (n): \n");
     scanf("%d", &n);
     printf("Nhap vao so cot cua ma tran 1 cung nhu so hang cua ma tran 2 (p): \n");
     scanf("%d", &p);
     printf("Nhap vao so cot cua ma tran 2 (m): \n");
     scanf("%d", &m);
     printf("Nhap vao ma tran thu 1: \n");
     nhap(a,n,p);
     printf("Nhap vao ma tran thu 2: \n");
     nhap(b,p,m);
     tich(a,b,c,n,p,m);
     printf("Tich cua 2 ma tran la: \n");
     for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
     }
     return 0;

  }

