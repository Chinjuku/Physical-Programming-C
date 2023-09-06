#include<stdio.h>

int main(){
    int M[8] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[7] = {1, 3, 9, 7, 11, 15, 19};
    int num, check = 0;

    scanf("%d", &num);

    while(!check){
        if(num > 0 && num < 21){
            for (int i = 0; i < 8; i++)
            {   
                if(num == M[i]){
                    printf("%d is in M at index [%d]", num, i);
                    check =1;
                    break;
                }
                else if(num == N[i]){
                    printf("%d is in N at index [%d]", num, i);
                    check =1;
                    break;
                }
            }
            if(check == 0){
                    printf("%d is not in neither M nor N", num);
                    check = 1;
                    break;
                }
            }
        
        else{
            scanf("%d", &num);
        }
    }
    return 0;
}