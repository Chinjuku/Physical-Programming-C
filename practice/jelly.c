#include<stdio.h>

int main(){
    int num1, num2, num3, count = 0,check = 0;

    scanf("%d %d %d", &num1, &num2, &num3);

    // ans = num1*num2*num3;
    while(!check){
        if (num1 >= 2){
            if (num1 % 2 != 0)
            {
                num1-1;
            }
            num1 /= 2;
            count++;
        }
        if (num2 >= 2){
            if (num2 % 2 != 0)
            {
                num2-1;
            }
            num2 /= 2;
            count++;
        }
        if (num3 >= 2){
            if (num3 % 2 != 0)
            {
                num3-1;
            }
            num3 /= 2;
            count++;
        }
        else{
            check = 1;
            break;
        }
    }
    printf("%d", count);
    return 0;
}