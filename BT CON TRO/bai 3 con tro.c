#include <stdio.h>
#include <stdlib.h>
double tim_Max(double *a,int n)
{
    double max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
double tim_Min(double *a,int n)
{
    double min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    printf("Nhap vao so phan tu cua mang: \n");
    scanf("%d",&n);
    double *a=(double*)malloc(n*sizeof(double));
    printf("Nhap vao mang: \n");
    for(int i=0;i<n;i++){
        scanf("%lf",a+i);
    }
    double max=tim_Max(a,n);
    double min=tim_Min(a,n);
    printf("Phan tu co gia tri lon nhat: %lf\n",max);
    printf("Phan tu co gia tri nho nhat: %lf\n",min);

    return 0;
}
