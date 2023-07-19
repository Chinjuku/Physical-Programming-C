#include <stdio.h>

int main () {
    int myNum;
    scanf("%d", &myNum);
    int num1 = myNum % 1000;
    int num2 = myNum / 1000;

    printf("%d%d", num1, num2);
}