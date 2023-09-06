#include<stdio.h>
#include<math.h>

double sin(double radius);

double findHeight(double g, double miu, double sins){
    return (pow(miu, 2) * pow(sins, 2)) / (2*g);
}

int main(){
    double deg, miu, radius, PI = 3.141592653589793;
    double sins, height, g = 9.81;
    scanf("%lf %lf", &deg, &miu);

    radius = (deg*PI)/180;
    sins = sin(radius);
    height = findHeight(g, miu, sins);
    int degi = deg;
    int u = miu;
    printf("theta (degree) : %d\n", degi);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", height);
    return 0;
}
