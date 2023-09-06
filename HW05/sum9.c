#include<stdio.h>
#include<stdbool.h>

int main(){
    bool stop = false;
    int num, count;
    while(!stop){
        scanf("%d", &num);
        count = count+num;
        if(num == -9){
            count = count+9;
            stop = true;
        }
    }
    printf("%d", count);


    return 0;
}