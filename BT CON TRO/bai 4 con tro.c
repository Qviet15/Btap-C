#include <stdio.h>
#include <stdlib.h>
void doiCho(double *a,double *b)
{
    double tempt=*a;
    *a=*b;
    *b=tempt;
}
void tang_dan(double *a,int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
             if(*(a+j)>*(a+j+1)){
                doiCho(a+j,a+j+1);
             }
        }
    }
}
void in_mang(double *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%lf ",*(a+i));
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Nhap vao so phan tu cua mang: \n");
    scanf("%d",&n);
    double *a=(double*)malloc(n*sizeof(double));
    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%lf",a+i);
    }
    printf("Mang da nhap la: ");
    in_mang(a,n);
    tang_dan(a,n);
    printf("Mang duoc sap xep theo thu tu tang dan la: ");
    in_mang(a,n);

    return 0;
}
