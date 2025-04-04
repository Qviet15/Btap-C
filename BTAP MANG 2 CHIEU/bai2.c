#include <stdio.h>
void nhap(int a[50][50], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
    }
 }

 void tong(int a[50][50], int b[50][50],int c[50][50], int n, int m){
     for(int i=0; i<n ; i++){
        for(int j=0 ; j<m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
     }
  }

int main(){
    int n,m , a[50][50], b[50][50], c[50][50];
    printf("Nhap vao so hang cua 2 ma tran(n) : \n");
    scanf("%d", &n);
    printf("Nhap vao so cot cua 2 ma tran(m) :\n");
    scanf("%d", &m);
    printf("Nhap vao ma tran 1: \n");
    nhap(a,n,m);
    printf("Nhap vao ma tran 2:\n");
    nhap(b,n,m);
    tong(a,b,c,n,m);
    printf("Tong 2 ma tran la: \n");
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d", c[i][j]);
    }
    printf("\n");
 }
}
