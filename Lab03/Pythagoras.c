#include<stdio.h>
#include<math.h>

int main(){
    double longa, longb, longc;

    scanf("%lf %lf", &longa, &longb);

    longc = sqrt(pow(longa, 2) + pow(longb, 2));
    printf("%.2lf", longc);


    return 0;
}