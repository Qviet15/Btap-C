#include <stdio.h>
void sapxepmang(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
}

int main() {
    int a[500];
    int b[500];
    int n;
    int m;
    printf("Nhap vao so phan tu cua mang 1 da sap xep: ");
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Nhap vao so phan tu cua mang 2 da sap xep: ");
    scanf("%d",&m);
    for(int i = 0; i < m;i++){
        scanf("%d",&b[i]);
    }
    int c[n+m];
    sapxepmang(a, n, b, m, c);
    printf("Mang ket qua sau khi ghep la: ");
    for (int i = 0; i < n+m; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
