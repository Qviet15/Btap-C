#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    float det, x, y;
    printf("Nhap a1: ");
    scanf("%f", &a1);
    printf("Nhap b1: ");
    scanf("%f", &b1);
    printf("Nhap c1: ");
    scanf("%f", &c1);
    printf("Nhap a2: ");
    scanf("%f", &a2);
    printf("Nhap b2: ");
    scanf("%f", &b2);
    printf("Nhap c2: ");
    scanf("%f", &c2);
    det = a1 * b2 - a2 * b1;
    if (det == 0) {
        printf("He phuong trinh vo nghiem hoac vo so nghiem.\n");
    } else {
        // Tính x và y
        x = (c1 * b2 - b1 * c2) / det;
        y = (a1 * c2 - a2 * c1) / det;

        printf("Nghiem cua he phuong trinh:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}
