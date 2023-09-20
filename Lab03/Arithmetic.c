#include<stdio.h>
// compile = ./a.exe
int main() {
    char input[100];
    double value1, value2, sum, minus, multi, divide;

    scanf("%s", input);

    // Use sscanf to extract the values
    sscanf(input, "%lf,%lf", &value1, &value2);
    sum = value1 + value2;
    minus = value1 - value2;
    multi = value1 * value2;
    divide = value1 / value2;
    
    printf("The sum of the given numbers : %lf\n", sum);
    printf("The difference of the given numbers : %lf\n", minus);
    printf("The product of the given numbers : %lf\n", multi);
    printf("The quotient of the given numbers : %lf", divide);

    return 0;
}