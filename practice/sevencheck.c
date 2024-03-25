#include<stdio.h>

int main(){
    int num, arr[100], count = 0, check = 0,
    count1 = 0;
    while(count < 9){
        scanf("%d", &num);
        arr[check] = num;
        // count += num;
        check++;
        count++;
        
    }
    for (int i = 0; i < 9; i++)
    {   
        int count2 = 0;
        // printf("-%d-", count1);
        if (count1 <= 100){
            count1 += arr[i];
            printf("\n%d", arr[i]);
        }
        else if (count1 > 100)
        {  
            i = 0;
            count1 = count1 - 100;
            if(count1 == arr[i]){
                // arr[i] = arr[i] + 1;
                printf("\n%d=", arr[i]);
            }
        }
        // printf("-%d-", count2);
        //     if(count2 == arr[i]){
        //     // arr[i] -= arr[i];
            
        // }
        
        // i++;
    }
    
    return 0;
}