#include <stdio.h>
#include <math.h>
int isTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}


int isEquilateral(float a, float b, float c) {
    return (a == b && b == c);
}
int isIsosceles(float a, float b, float c) {
    return (a == b || b == c || a == c);
}
int isRightTriangle(float a, float b, float c) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    return (fabs(a * a + b * b - c * c) < 1e-6);
}

int isRightIsosceles(float a, float b, float c) {
    return isRightTriangle(a, b, c) && (a == b);
}

int main() {
    float a, b, c;
    printf("Nhap do dai 3 canh cua tam giac:\n");
    printf("Canh a: ");
    scanf("%f", &a);
    printf("Canh b: ");
    scanf("%f", &b);
    printf("Canh c: ");
    scanf("%f", &c);
    if (!isTriangle(a, b, c)) {
        printf("Ba canh khong tao thanh tam giac.\n");
        return 0;
    }
    if (isEquilateral(a, b, c)) {
        printf("Tam giac deu.\n");
    } else if (isRightIsosceles(a, b, c)) {
        printf("Tam giac vuong can.\n");
    } else if (isRightTriangle(a, b, c)) {
        printf("Tam giac vuong.\n");
    } else if (isIsosceles(a, b, c)) {
        printf("Tam giac can.\n");
    } else {
        printf("Tam giac thuong.\n");
    }

    return 0;
}
