#include <stdio.h>

int main() {
    int n;
    printf("nhap vao so phan tu trong mang:\n ");
    scanf("%d", &n);
    int arr[n];
    printf("nhap vao cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    int max_index = 0, min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }


    printf("\nphan tu lon nhat la %d tai vi tri %d.\n", max, max_index + 1);
    printf("phan tu be nhat la %d tai vi tri %d.\n", min, min_index + 1);

    return 0;
}
