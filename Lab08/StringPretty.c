#include<stdio.h>

int main(void){
    int num;
    char c1[50], c2[40];
    scanf("%d %s %s", &num, c1, c2);
    for (int i = 0; i <= 3; i++)
    {
        if(i == 1){
            for (int j = 0; j < num; j++)
            {   
                if(j == 0 || j == 2){
                    putchar('*');
                }
                else if(j == num/2 -1){
                    puts(c1);
                }
                else{
                    putchar(' ');
                }
            } 
        }
        else{
            for (int j = 0; j < num-1; j++)
            {
            if(i == 0 || i == 3){
                printf("*");
            }
            }
        }
        printf("\n");
    }
    
}