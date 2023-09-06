#include<stdio.h>
#include<stdbool.h>

int main(){
    int num;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    bool stop = false;
    scanf("%d", &num);
    while (!stop)
    {
        if(num <= 20 && num >= 1){
            bool found = false;
            for (int i = 0; i<8; i++){
                if(num == M[i]){
                printf("%d is in M at index [%d]", num, i);
                found = true;
                stop = true;
                }
            }
            for (int i = 0; i<7; i++){
                if(num == N[i]){
                printf("%d is in N at index [%d]", num, i);
                found = true;
                stop = true;
                }
            }
            if(!found){
                printf("%d is not in neither M nor N", num);
                stop = true;
            }
        }
        else{
            scanf("%d", &num);
        }
    }
    return 0;
}