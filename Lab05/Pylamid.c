#include<stdio.h>

int main(){
    int num, lak;

    scanf("%d", &num);

    lak = num;

    for (int i = 0; i < num; i++, lak++)
    {
        for(int j = 0; j < lak; j++){
            if(i >= num-j-1){
                printf("*");
            }else{
                printf(" ");
            }
            
        }

        printf("\n");
    }
    
    return 0;
}