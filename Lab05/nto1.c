#include<stdio.h>

int main(){
    int num;
    int i=1;
    scanf("%d", &num);
    printf("%d ", num);
    while (i < num){
        num--;
        printf("%d ", num);
    }
    return 0;
}