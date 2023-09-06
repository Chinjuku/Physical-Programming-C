#include<stdio.h>

int main(){
    double grade;
    scanf("%lf", &grade);
    
    if (grade >= 80 && grade <= 100){
        printf("A");
    } else if(grade >= 70 && grade <80){
        printf("B");
    } else if(grade >= 60 && grade < 70){
        printf("C");
    } else if(grade >= 50 && grade < 60){
        printf("D");
    } else if(grade >= 0 && grade < 50){
        printf("F");
    } else
        printf("Out of Range");
    return 0;
}