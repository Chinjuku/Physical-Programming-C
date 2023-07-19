#include<stdio.h>
int main(){
    float height, weight, bmi;

    scanf("%f %f", &height, &weight);

    bmi = weight / ((height/100)*(height/100));
    printf("%.6f", bmi);

    return 0;
}