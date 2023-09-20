#include<stdio.h>

int main(){
    double price, percent, number, sales;

    scanf("%lf %lf %lf", &price, &percent, &number);

    sales = price*((100-percent)/100)*number;

    printf("%.2lf", sales);

    return 0;
}