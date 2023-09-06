#include<stdio.h>

int main(){
    int num;
    int i=0;
    scanf("%d", &num);
    do {
        i++;
        printf("%d ", i);
    }while (i < num);
    return 0;
}