#include<stdio.h>

int main(){
    int num;
    int i=0;
    scanf("%d", &num);
    while (i < num){
        i++;
        printf("%d ", i);
    }
    return 0;
}