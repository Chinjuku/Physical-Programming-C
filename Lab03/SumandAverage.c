#include<stdio.h>

int main(){
    float num1, num2, num3, num4, sum, avg;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    sum = num1 + num2 + num3 + num4;
    avg = (num1 + num2 + num3 + num4)/4;

    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", avg);
}