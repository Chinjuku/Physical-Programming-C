#include<stdio.h>
#include<string.h>

int main(){
    char arr[300], ch;
    
    scanf("%[^\n] %c", arr, &ch);

    int count = strlen(arr), check = 0, nums[100], jk = 0;

    for (int i = 0; i < count; i++)
    {   
        if(arr[i] == ch || arr[i] == ch-32){
            nums[jk] = i+1;
            jk++;
            check = 1;
        }
    }
    if(check == 0){
        printf("Not found.");
    }
    else{
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", jk, ch);
        for (int i = 0; i < jk-1; i++)
        {   
            printf("%d, ", nums[i]);
        }
        printf("%d", nums[jk-1]);
        
    }

    return 0;
}