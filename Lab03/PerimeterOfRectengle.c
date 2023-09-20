#include<stdio.h>

int main(){
    double num1, num2, rac;

    scanf("%lf %lf", &num1, &num2);

    rac = num1 + num1 + num2 + num2;

    printf("Perimeter of rectangle = %.4lf units", rac);

    return 0;
}