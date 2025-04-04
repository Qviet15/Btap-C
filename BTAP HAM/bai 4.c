#include <stdio.h>

void nhapmatran(int a[50][50], int n, int m, int p){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void inmatran(int c[50][50], int n, int m, int p){
    for(int i=0; i<n; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void tich(int a[50][50], int b[50][50], int c[50][50], int n, int m, int p){
    for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            for(int k=0; k<p ; k++){
                c[i][j] += a[i][k] * b[k][j] ;
            }
        }
    }
}
int main(){
    int n, m, p;
    printf("Nhap vao so hang cua ma tran A(n): \n");
    scanf("%d", &n);
    printf("Nhap vao so cot cua ma tran A cung nhu so hang cua ma tran B(p): \n");
    scanf("%d", &p);
    printf("Nhap vao so cot cua ma tran B(m): \n");
    scanf("%d", &m);
    int a[50][50];
    int b[50][50];
    int c[50][50];
    printf("Nhap vao ma tran A: \n");
    nhapmatran(a,n,m,p);
    printf("Nhap vao ma tran B: \n");
    nhapmatran(b,n,m,p);
    tich(a,b,c,n,m,p);
    printf("Tich cua 2 ma tran A va B la: \n");
    inmatran(c,n,m,p);
    return 0;
}
