#include<stdio.h>

int main(){
    int jump, longs, check = 0, count = 0, i = 0;

    scanf("%d %d", &jump, &longs);

    while(!check){
        if(jump >= 1 && longs <= 1000){
            if(i < longs){
                i += jump;
                count++;
                // printf("%d ", i);
            }
            else if(i >= longs){
                check = 1;
                break;
            }
        }else{
            printf("0");
            check = 1;
            break;
        }
    }
    printf("%d", count);
    return 0;
}