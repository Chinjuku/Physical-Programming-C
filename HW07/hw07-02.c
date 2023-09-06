#include <stdio.h>
#include <math.h>


double height(double u,double radius){
    double h;
    h = (pow(u,2)*pow(sin(radius),2))/(2*9.81);
    return h;
}

int main(){
    int degree, s;
    double radius,h;
    double pi = 3.141592653589793;

    scanf("%d %d", &degree, &s);

    radius = (degree * pi)/180;
    
    h = height( s, radius);
    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", s);
    printf("h (m) : %.4lf\n", h);

    return 0;
}