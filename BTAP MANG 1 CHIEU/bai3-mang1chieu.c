#include <stdio.h>

int main() {
    int n;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    int sum_positive = 0, sum_negative = 0;
    int count_positive = 0, count_negative = 0;
    int sum_all = 0;


    printf("nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum_all += arr[i];


        if (arr[i] > 0) {
            sum_positive += arr[i];
            count_positive++;
        } else if (arr[i] < 0) {
            sum_negative += arr[i];
            count_negative++;
        }
    }

    float average_all = (float)sum_all / n;
    printf("\ntong cac so duong: %d\n", sum_positive);
    printf("tong cac so am: %d\n", sum_negative);
    printf("trung binh cong cua cac gia tri trong mang: %.2f\n", average_all);

    return 0;
}
