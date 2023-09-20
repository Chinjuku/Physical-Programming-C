#include<stdio.h>
#include<math.h>

int main(){
    double price, mid, height, volume, bathml;

    scanf("%lf %lf %lf", &price, &mid, &height);

    volume = height*3.14159265359*pow(mid/2, 2);
    bathml = price/volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", bathml);
}