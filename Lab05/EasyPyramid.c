#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        for(int j=num - i - 1; j > 0; j--){
            printf(" ");
        }
        for(int j=1; j <= (i*2)+1; j++){
            // j = j*2 + 1;
            printf("*");
        }
        printf("\n");
    }

    return 0;
}