#include <stdio.h>
void sapxep(int a[],int l,int r){
int i = l,j=r;
int s = a[(i+j)/2];
int temp;
if(i <= j){
    while(a[i]<s) i++;
    while (a[j]>s) j--;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
}
if(l<j) sapxep(a,l,j);
if(i<r) sapxep(a,i,r);
}
int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i< n ;i++){
        printf("Nhap vao phan tu thu %d : ",i+1);
        scanf("%d",&a[i]);
    }
sapxep(a,0,n-1);
printf("Cac phan tu cua mang sau khi da sap xep la:\n ");
for(int i = 0;i< n ;i++){

    printf("%d ",a[i]);
}
}
