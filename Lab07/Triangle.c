#include<stdio.h>
#include<math.h>

double perimeter(double a, double b){
    return sqrt(pow(a, 2) + pow(b, 2)) + a + b;
}
double area(double a, double b){
    return a*b*0.5;
}
void printP(double x){
    printf("Perimeter: %.2lf\n", x);
}
void printA(double y){
    printf("Area: %.2lf", y);
}

int main(){
    double a, b, peris, areas;

    scanf("%lf %lf", &a, &b);

    peris =  perimeter(a, b);
    areas =  area(a, b);
    printP(peris);
    printA(areas);
    
    return 0;
}