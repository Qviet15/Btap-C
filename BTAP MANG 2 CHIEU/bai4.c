#include <stdio.h>
int main(){
    int n;

    printf("Nhap vao hang cua ma tran vuong: ");
    scanf("%d",&n);
    int h1=0,h2=n-1,c1=0,c2=n-1;
    int cnt=1;
    int a[n][n];
   while(c1<=c2 && h1<=h2){
     for(int i = c1;i<=c2;i++){
        a[h1][i] = cnt;
        cnt++;
    }
    ++h1;
    for(int i = h1;i<=h2;i++){
        a[i][c2] = cnt;
        cnt++;
    }
    --c2;
    for(int i = c2;i>=c1;i--){
        a[h2][i] = cnt;
        cnt++;
    }
    --h2;
    for(int i = h2;i>=h1;i--){
        a[i][c1] = cnt;
        cnt++;
    }
    ++c1;
   }
   for(int i=0; i < n; i++){
    for(int j=0; j<n; j++){
        printf("%d ", a[i][j]);
    }
    printf("\n");
   }
}
