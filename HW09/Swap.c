#include<stdio.h>

void swap(double *a, double *b) {
    double tmp = *a; // สร้างตัวแปรชั่วคราวเพื่อเก็บค่า
    *a = *b; // แก้ไขค่าของ ptrA โดยใช้ Pointer ให้เป็นค่าของ b
    *b = tmp;
}

int main() {
    double x, y, z;
    double *a = &x;
    double *b = &y;
    double *c = &z;
    scanf("%lf %lf %lf", &x, &y, &z);

    swap(&x, &y);
    swap(&x, &z);
    printf("%.2lf %.2lf %.2lf", x, y, z);
    return 0;
}