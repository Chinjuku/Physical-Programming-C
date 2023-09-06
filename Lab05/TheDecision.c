#include<stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num2<num1){
        printf("%d ", num1);
        while(num2<num1){
            num1--;
            printf("%d ", num1);
        }
    }else{
        printf("%d ", num1);
        while(num1<num2){
            num1++;
            printf("%d ", num1);
        }
    }
    return 0;
}