#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    char ten[10000];
    int gia;
    int soLuong;
    int thanhTien;
}SP;

void nhapThongTinCuaDonHang(SP *a)
{
    printf("Nhap vao ten cua san pham: \n");
    getchar();
    fgets(a->ten,10000,stdin);
    a->ten[strcspn(a->ten, "\n")] = 0;
    printf("Nhap vao gia cua san pham: \n");
    scanf("%d",&a->gia);
    printf("Nhap vao so luong san pham: \n");
    scanf("%d",&a->soLuong);
    a->thanhTien=a->gia*a->soLuong;
}
void doiCho(SP *a,SP *b)
{
    SP tempt=*a;
    *a=*b;
    *b=tempt;
}
void sapXep(SP *a,int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strcmp(a[j].ten,a[j+1].ten)>0){
                doiCho(a+j,a+j+1);
            }
        }
    }
}
void inDanhSach(SP *a,int n)
{
    printf("\n=============== So Lieu Ban Hang ===============\n");
    printf("%-5s %-12s%-10s%-11s%-11s\n","STT","Ten Hang","Don Gia","So Luong","Thanh Tien");
    for(int i=0;i<n;i++){
        printf("%-5d %-12s%-10d%-11d%-11d\n",i+1,a[i].ten,a[i].gia,a[i].soLuong,a[i].thanhTien);
    }
    int T=0;
    for(int i=0;i<n;i++){
        T+=a[i].thanhTien;
    }
    printf("\n");
    printf("----------------------------%-11s%d","Tong Tien",T);
}
int main()
{
    int n;
    printf("Nhap vao so luong san pham: \n");
    scanf("%d",&n);
    SP *a=(SP*)malloc(n*sizeof(SP));
    for(int i=0;i<n;i++){
        nhapThongTinCuaDonHang(a+i);
    }
    sapXep(a,n);
    inDanhSach(a,n);
    return 0;
}

